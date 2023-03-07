#include<conio.h>
#include<iostream>
#include<string.h>
#include<string>

using namespace std;
class Person{

public:
    virtual void get()=0;
    virtual void show()=0;

};


class D : public Person{
    int num;
public:
    void get(){
    cout<<"enter: ";
    cin>>num;
    }

    void show(){
    cout<<"num= "<<num;
    }
};

int main(){
    D o;
    Person *p;
    p =&o;
    p->get();
    p->show();
    return 0;



}
