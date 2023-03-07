
#include<conio.h>
#include<iostream>
#include<string.h>
#include<string>

using namespace std;
class scientist;
class manager{
protected:
    float msalary;
public:
    void get(){
        cout<<"Enter manager salary: ";
        cin>>msalary;
    }

    friend void compare(manager m, scientist s);
};

class scientist{
    float salary;
public:
    void get(){
        cout<<"Enter manager salary: ";
        cin>>salary;
    }
    friend void compare(manager m, scientist s);
};

void compare(manager m, scientist s){
    if (m.msalary>s.salary){
        cout<<"Manager's salary is more";

    }else if(m.msalary<s.salary){
        cout<<"Scientists's salary is more";
    }else{
        cout<<"Salaries are equal";
    }
}

int main(){
manager m;
scientist s;
m.get();
s.get();
compare(m,s);

return 0;
}
