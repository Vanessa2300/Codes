#include<fstream>
#include<iostream>
#include<conio.h>
//using namespace std;

int main ( int argc, char *argv[] )
{
    char ch[50];
    ofstream ofs;
    system("clear");
    ofs.open(argv[1]);
    if(!ofs)
    {
        cout<<"\ncould not open file";
        exit(1);
    }
    cout<<"\nEnter string to be written into the file : ";
    gets(ch);
    ofs<<ch;
    ofs.close();
    if ( argc != 2 )
    cout<<"usage: "<< argv[0] <<" <filename>\n";
    else
    {
        ifstream fs(argv[1]);
        if (!fs)
        {
            cout<<"could not open file\n";
            exit(1);
        }
        else
        {
            cout<<"\nthe data in file is : ";
            char x;
            while (fs.get(x))
                cout<< x;
        }
    }
    return 0;
}
