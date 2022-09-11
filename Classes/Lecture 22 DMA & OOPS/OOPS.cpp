#include <iostream>
using namespace std;
class car{
    public:
    // Data Member
    char name[100];
    int model;
    int price;
    int seats;
    ///////////////////////Default Constructor/////////////////////////////////
    car(){
        cout<<"Inside Default Constructor"<<endl;
    }
    //////////////////////!Deault Constructor/////////////////////////////////
    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Seats : "<<seats<<endl;
        cout<<"Model : "<<model<<endl;
    }
};

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

    car B;
    strcpy(B.name,"Audi");
    B.price=1500;
    B.seats=2;
    B.model=2022;
    B.print();
    return 0;
}