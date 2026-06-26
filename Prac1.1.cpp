#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int id;
    string name;
    float gpa;

    void dis(){
        cout<<"Student id "<<id<<"\nName"<<name<<"\nGPA"<<gpa<<endl;
    }
    void up(float gpa){
        this->gpa = gpa;
    }
};

struct Book{
    string title;
    string author;
    int year;
    bool inava;

    void dis(){
        cout<<"Title "<<title<<"\nAuthor Name "<<author<<"\nYear"<<year<<"\nAvalible "<<inava<<endl;
    }
    void boorow(){
        if(inava){
            inava = false;
            cout<<"Borrow success"<<endl;
        }else{
            cout<<"Book is not nAvalible"<<endl;
        }
    }
    void returb(){
        inava = true;
    }
};

struct Emp{
    int empid;
    string empname;
    double salary;

    void dis(){cout<<"Employee id: "<<empid<<"\nName: "<<empname<<"\nSalary:$"<<salary<<endl;}
    void giverise(double pers){
        salary += salary*(pers/100);
    }
};

int main() 
{
    Student s1 = {1001,"Alice",3.8};
    s1.dis();
    s1.up(3.9);
    s1.dis();
    cout<<"\n--------------------------\n";

    Book b1 = {"C++Prime","Lippmsn",2012,true};
    b1.dis();
    b1.boorow();
    b1.dis();
    b1.returb();
    cout<<"\nAfter returnig the book:\n";
    b1.dis();
    cout<<"\n--------------------------\n";
    
    Emp e1={501,"bob",55000.0};
    e1.dis();
    e1.giverise(10);
    cout<<"\nAfter rise:\n";
    e1.dis();
    return 0;
}
