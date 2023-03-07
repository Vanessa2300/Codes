#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<conio.h>

int main(){

    char src[50],tgt[50];
    char ch;

    cout<<endl<<"Enter source filename";
    cin>>src;

    cout<<endl<<"Enter target filename";
    cin>>tgt;

    ifstream infile(src);
    ofstream outfile(tgt);

    while(infile){
        infile.get(ch);
        infile.put(ch);
    }

    return 0;
}
