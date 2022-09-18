#include <iostream>
using namespace std;
class Car{
    private:
    int price;
    public:
    // Data Member
    char *name;
    int model;
    int seats;
    static int cnt;
    const int tyres;
    //// DEFAUlT METHODS
    /////1.Constructors
    ///////////////////////Default Constructor/////////////////////////////////
    Car():tyres(4){
        cout<<"Inside Default Constructor \n"<<endl;
        cnt++;
        name=NULL;
    }
    //////////////////////!Default Constructor/////////////////////////////////

    ///////////////////////Parameterized Constructor/////////////////////////////
    Car(char * n,int p,int s,int m):tyres(4){
        cnt++;
        cout<<"Inside Parameterized Constructor \n"<<endl;
        name=new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
        seats=s;
        model=m;
    }
    //////////////////////!Parameterized Constructor/////////////////////////////////
    
    ///////////////////////Parameterized Constructor-1/////////////////////////////
    Car(int p,char * n,int s,int m):tyres(4){
        cnt++;
        cout<<"Inside Parameterized Constructor-2 \n"<<endl;
        name=new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
        seats=s;
        model=m;
    }
    //////////////////////!Parameterized Constructor-2/////////////////////////////////
    
    //////////////////////2. Copy Constructor/////////////////////////////////
    Car(Car &X):tyres(4){
        cout<<"Inside Copy Constructor \n"<<endl;
        cnt++;
        name=new char[strlen(X.name)+1];
        strcpy(name,X.name);
        price=X.price;
        seats=X.seats;
        model=X.model;
    }
    //////////////////////!Copy Constructor/////////////////////////////////

    //////////////////////3. Copy Assignment Constructor/////////////////////////////////
    void operator = (Car &X){
        cout<<"Inside Copy Assignment Constructor \n"<<endl;
        name=new char[strlen(X.name)+1];
        strcpy(name,X.name);
        price=X.price;
        model=X.model;
        seats=X.seats;
    }
    //////////////////////!Copy Assignment Constructor/////////////////////////////////

    ////////////////////////////4. Destructor///////////////////////////////////
    ~Car(){
        cnt--;
        cout<<"Destroying Car "<<name<<endl;
    }
    ////////////////////////////!Destructor///////////////////////////////////
    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Seats : "<<seats<<endl;
        cout<<"Model : "<<model<<endl;
        cout<<"Tyres : "<<tyres<<endl<<endl;
    }
    void setName(char *n){
        if(name != NULL){
            delete []name;
        }
        name =new char[strlen(n)+1];
        strcpy(name,n);
    }
    ////////////////////////////OPERATOR OVERLOADING///////////////////////////////////
    void operator +=(Car X){
        char *oldname=name;
        name =new char[strlen(name)+strlen(X.name)+1];
        strcpy(name,oldname);
        strcat(name,X.name);
        price+=price;
        seats+=seats;
        model+=model;
        delete [] oldname;
    }
    ////////////////////////////!OPERATOR OVERLOADING///////////////////////////////////


    void updatePrice(int p){
        if (p>500 and p<1000)
        {
            price=p;
        }
        else{
            p=900;
        }
    }
    int getPrice(){
        return price;
    }
};
int Car::cnt=0;
    ////////////////////////////!BLUEPRINT///////////////////////////////////
int main()
{
    Car B("Audi",1500,2,2022);
    B.print();
    cout<<endl;
    Car A(B);
    A.updatePrice(-1000);
    cout<<A.getPrice()<<endl;
    A.setName("Mercedes");
    A.print();
    Car C=A;
    C.name[0]='T';
    C.print();
    A+=C;
    A.print();
    cout<<"Total No. Of Cars:"<<Car::cnt;
    return 0;
}