#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int d){
        data=d;
        next=NULL;
    }
};
int lenghtLL(node * head){
    int ans=0;
    while (head!=NULL)
    {
        head=head->next;
        ans++;
    }
    return ans;
}
void InsertAtFront(node * &head,node * &tail,int data){
    if (head==NULL)
    {
        node * n=new node(data);
        head=tail=n;
    }
    else{
        node * n=new node(data);
        n->next=head;
        head=n;
    }
}
void printLL(node * head){
    while (head!=NULL)
    {
        cout<<head->data<<" --> ";
        head=head->next;
    }
    cout<<"NULL \n";
}
void InsertAtEnd(node * &head,node * &tail,int data){
    if(!head){
        node * n=new node(data);
        head=tail=n;
    }
    else{
        node * n=new node(data);
        tail->next=n;
        tail=n;
    }
}
void InsertAtMid(node * &head,node * &tail,int data,int pos){
    
    if(pos==0){
        InsertAtFront(head,tail,data);
    }
    else if(pos>=lenghtLL(head)){
        InsertAtEnd(head,tail,data);
    }
    else{
        node * temp=head;
        for (int i = 0; i < pos-1; i++)
        {
            temp=temp->next;
        }
        node * n=new node(data);
        n->next=temp->next;
        temp->next=n;
    }
}
void DeleteAtFront(node * &head,node * &tail){
    if(head==NULL){
        return;
    }
    else if (head->next==NULL)
    {
        delete head;
        head=tail=NULL;
    }
    else{
        node * temp=head;
        head=head->next;
        delete temp;
    }
}
void DeleteAtEnd(node * &head,node * &tail){
    if(head==NULL){
        return;
    }
    else if(head->next==NULL){
        delete head;
        head=tail=NULL;
    }
    else{
        node * temp=head;
        while (temp->next!=tail)
        {
            temp=temp->next;
        }
        delete tail;
        temp->next = NULL;
        tail = temp;
    }
}
void DeleteAtMid(node *&head,node * &tail,int pos){
    if(pos==0){
        DeleteAtFront(head,tail);
    }
    else if(pos>=lenghtLL(head)-1){
        DeleteAtEnd(head,tail);
    }
    else{
        node* temp=head;
        for (int i = 1; i <= pos-1; i++)
        {
            temp=temp->next;
        }
        node * n=temp->next;
        temp->next=temp->next->next;
        delete n;
    }
}
//////////////////////Mid Of LL/////////////////////////
node * midOfLL(node * head){
    node * f=head->next;
    node * s=head;
    while (f!=NULL and f->next!=NULL)
    {
        f=f->next->next;
        s=s->next;
    }
    return s;
}
//////////////////////!Mid Of LL/////////////////////////
int main()
{
    node * head=NULL;
    node * tail=NULL;
    InsertAtFront(head,tail,1);
    InsertAtFront(head,tail,2);
    InsertAtFront(head,tail,3);
    InsertAtFront(head,tail,4);
    InsertAtFront(head,tail,5);
    InsertAtEnd(head,tail,6);
    InsertAtEnd(head,tail,7);
    InsertAtEnd(head,tail,8);
    printLL(head);
    cout<<"Lenght OF LL "<<lenghtLL(head)<<endl;
    DeleteAtMid(head,tail,2);
    printLL(head);
    node * head1=midOfLL(head);
    cout<<head1->data;
    return 0;
}