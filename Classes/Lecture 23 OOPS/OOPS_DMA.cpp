#include <iostream>
using namespace std;
class Car{
    public:
    // Data Member
    char *name;
    int model;
    int price;
    int seats;
    //// DEFAUlT METHODS
    /////1.Constructors
    ///////////////////////Default Constructor/////////////////////////////////
    Car(){
        cout<<"Inside Default Constructor \n"<<endl;
        name=NULL;
    }
    //////////////////////!Default Constructor/////////////////////////////////

    ///////////////////////Parameterized Constructor/////////////////////////////
    Car(char * n,int p,int s,int m){
        cout<<"Inside Parameterized Constructor \n"<<endl;
        name=new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
        seats=s;
        model=m;
    }
    //////////////////////!Parameterized Constructor/////////////////////////////////
    
    ///////////////////////Parameterized Constructor-1/////////////////////////////
    Car(int p,char * n,int s,int m){
        cout<<"Inside Parameterized Constructor-2 \n"<<endl;
        name=new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
        seats=s;
        model=m;
    }
    //////////////////////!Parameterized Constructor-2/////////////////////////////////
    
    //////////////////////2. Copy Constructor/////////////////////////////////
    Car(Car &X){
        cout<<"Inside Copy Constructor \n"<<endl;
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
        cout<<"Destroying Car "<<name<<endl;
    }
    ////////////////////////////!Destructor///////////////////////////////////
    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Seats : "<<seats<<endl;
        cout<<"Model : "<<model<<endl;
    }
    void setName(char *n){
        if(name != NULL){
            delete []name;
        }
        name =new char[strlen(n)+1];
        strcpy(name,n);
    }
};
    ////////////////////////////!BLUEPRINT///////////////////////////////////
int main()
{
    Car B("Audi",1500,2,2022);
    B.print();
    cout<<endl;
    Car A(B);
    A.setName("Mercedes");
    A.print();
    Car C=A;
    C.print();
    return 0;
}