#include<conio.h>
#include<iostream>
#include<string.h>
#include<string>
using namespace std;

class String{

    char s[10];
public:
    String(char s1[10] = "Hello"){
        strcpy(s,s1);
    }

    String (String &s2){
        strcpy(s,s2.s);
    }

    friend void concat(String s3, String s4);
};

void concat(String s3, String s4){
    char s5[20];

    cout<<"\n"<<strcmp(s4.s,s3.s);
    strcpy(s5,strcat(s3.s,s4.s));

    cout<<"\nConcatenated string: "<<s5;

}

int main(){

String A;
String B("Vanessa");
String C = B;
String D("Hi");

concat(A,C);
concat(D,B);


return 0;
}
