#include <iostream>
#include <unordered_map>
using namespace std;
class node{
    public:
    char ch;
    bool isTerminal;
    unordered_map<char,node*>h;
    node(char d){
        ch = d;
        isTerminal=false;
    }
};
class Tries{
    public:
    node * root;
    Tries(){
        root=new node('\0');
    }
    void addWord(char * word){
        node * temp =root;
        for (int i = 0; word[i] != '\0' ; i++)
        {
            char ch = word[i];
            if(!temp->h.count(ch)){  //Count will help in checking the occurence of key.
                temp->h[ch]=new node(ch);
            }
            temp=temp->h[ch];
        }
        temp->isTerminal=true;
    }
    bool isPresent(char * word){
        node * temp =root;
        for (int i = 0; word[i] < '\0'; i++)
        {
            char ch = word[i];
            if (!temp->h.count(ch))
            {
                return false;
            }
            temp=temp->h[ch];
        }
        return temp->isTerminal;
    }
    void findAllWords(string &x,node * root){
        if (root->isTerminal)
        {
            cout<<x<<endl;
        }
        for (auto n : root->h){
            x.push_back(n.first);
            findAllWords(x,n.second);
            x.pop_back();
        }
        
    }
    void autoFill(char * word){
        node *temp=root;
        string x;
        for (int i = 0; word[i] != '\0'; i++)
        {
            char ch = word[i];
            if (!temp->h.count(ch))
            {
                return;
            }
            x.push_back(ch);
            temp=temp->h[ch];
        }
        findAllWords(x,temp);
    }
};
int main()
{
    Tries t;
    t.addWord("Hello");
    t.addWord("He");
    t.addWord("Hell");
    t.addWord("car");
    t.addWord("care");
    t.addWord("caring");
    char word[]="car";
    if (t.isPresent(word))
    {
        cout<<"Present Hai"<<endl;
    }
    else{
        cout<<"Present Nhi Hai"<<endl;
    }
    t.autoFill("car");
    return 0;
}