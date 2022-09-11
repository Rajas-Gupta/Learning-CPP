#include <iostream>
using namespace std;
class car{
    public:
    // Data Member
    char name[100];
    int model;
    int price;
    int seats;
    //// DEFAUlT METHODS
    /////1.Constructors
    ///////////////////////Default Constructor/////////////////////////////////
    car(){
        cout<<"Inside Default Constructor \n"<<endl;
    }
    //////////////////////!Default Constructor/////////////////////////////////

    ///////////////////////Parameterized Constructor/////////////////////////////
    car(char * n,int p,int s,int m){
        cout<<"Inside Parameterized Constructor \n"<<endl;
        strcpy(name,n);
        price=p;
        seats=s;
        model=m;
    }
    //////////////////////!Parameterized Constructor/////////////////////////////////
    
    ///////////////////////Parameterized Constructor-1/////////////////////////////
    car(int p,char * n,int s,int m){
        cout<<"Inside Parameterized Constructor-2 \n"<<endl;
        strcpy(name,n);
        price=p;
        seats=s;
        model=m;
    }
    //////////////////////!Parameterized Constructor-2/////////////////////////////////
    
    //////////////////////2. Copy Constructor/////////////////////////////////
    car(car &X){
        cout<<"Inside Copy Constructor \n"<<endl;
        strcpy(name,X.name);
        price=X.price;
        seats=X.seats;
        model=X.model;
    }
    //////////////////////!Copy Constructor/////////////////////////////////

    //////////////////////3. Copy Assignment Constructor/////////////////////////////////
    void operator = (car &X){
        cout<<"Inside Copy Assignment Constructor \n"<<endl;
        strcpy(name,X.name);
        price=X.price;
        model=X.model;
        seats=X.seats;
    }
    //////////////////////!Copy Assignment Constructor/////////////////////////////////

    ////////////////////////////4. Destructor///////////////////////////////////
    ~car(){
        cout<<"Destroying Car "<<name<<endl;
    }
    ////////////////////////////!Destructor///////////////////////////////////
    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Seats : "<<seats<<endl;
        cout<<"Model : "<<model<<endl;
    }
};
    ////////////////////////////!BLUEPRINT///////////////////////////////////
int main()
{
    car A;  // A is an object of Class Car.
    //cout<<sizeof(A);
    // A.name[0]='B';
    // A.name[1]='M';
    // A.name[2]='W';
    // A.name[3]='\0';
    strcpy(A.name,"BMW");
    A.price=1000;
    A.seats=4;
    A.model=2018;

    cout<<A.name<<endl;
    cout<<A.price<<endl;
    cout<<A.seats<<endl;
    cout<<A.model<<endl;

    car B("Audi",1500,2,2022);
    // strcpy(B.name,"Audi");
    // B.price=1500;
    // B.seats=2;
    // B.model=2022;
    B.print();
    car C(20000,"Jaguar",2,2022);
    C.print();
    cout<<endl;
    //Car D=A;
    car D(A);
    D.print();
    cout<<endl;
    car E=B;
    E.print();
    cout<<endl;
    E=C;
    E.print();
    return 0;
}