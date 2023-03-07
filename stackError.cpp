
#include <iostream>
#define MAX 5
using namespace std;

template <class T>

class Stack{
protected:
    T arr[MAX];
    int top;
public:
    Stack(){
        cout<<"Stack created Successfully"<<endl;
        top =-1;
    }

    void push(){
        T a;
        int  x=0;
        try{
                if(isFull()){
                throw x;
        }else{
                cout<<"Enter element u want to push: ";
                cin>>a;
                arr[++top]=a;
            }
        }
        catch (int x){
            cout<<"Error caught: Stack is full";
        }


    }

    void pop(){
        T a;
        if (isEmpty()){
            cout<<"Stack is empty"<<endl;
        }
        else{
            a=arr[top--];
            cout<<"Popped element is: "<<a<<endl;
        }
    }

    int isFull(){
        if(top==MAX-1){
            return 1;
        }
        else{
            return 0;
        }
    }

    int isEmpty(){
        if(top==-1)
            return 1;
        else
            return 0;
    }

    void display(){
        for(int i=0;i<=top;i++){
            cout<<" "<<arr[i];
        }
    }
};

int main(){
    int ch;
    Stack<int> s;
    do{
        cout<<"\n1.Push\n2.Pop\n3.isFull\n4.isEmpty\n5.Display\n6.Exit\nEnter your choice:";
        cin>>ch;

        switch(ch){
        case 1:
            s.push();
            break;

        case 2:
            s.pop();
            break;

        case 3:
            if(s.isFull()){
                cout<<"\nStack is full"<<endl;
            }
            else{
                cout<<"\nStack is not full"<<endl;
            }
            break;

        case 4:
            if(s.isEmpty()){
                cout<<"\nStack is Empty"<<endl;
            }
            else{
                cout<<"\nStack is not Empty"<<endl;
            }
            break;

        case 5:
            s.display();
            break;

        case 6:
            break;

        default:
            cout<<"Enter correct choice: "<<endl;
            break;
        }
    }while(ch!=6);

    return 0;
}
/*
Stack created Successfully

1.Push
2.Pop
3.isFull
4.isEmpty
5.Display
6.Exit
Enter your choice:1
Enter element u want to push: 10

1.Push
2.Pop
3.isFull
4.isEmpty
5.Display
6.Exit
Enter your choice:1
Enter element u want to push: 20

1.Push
2.Pop
3.isFull
4.isEmpty
5.Display
6.Exit
Enter your choice:1
Enter element u want to push: 30

1.Push
2.Pop
3.isFull
4.isEmpty
5.Display
6.Exit
Enter your choice:1
Enter element u want to push: 40

1.Push
2.Pop
3.isFull
4.isEmpty
5.Display
6.Exit
Enter your choice:1
Enter element u want to push: 50

1.Push
2.Pop
3.isFull
4.isEmpty
5.Display
6.Exit
Enter your choice:1
Stack is full

1.Push
2.Pop
3.isFull
4.isEmpty
5.Display
6.Exit
Enter your choice:2
Popped element is: 50

1.Push
2.Pop
3.isFull
4.isEmpty
5.Display
6.Exit
Enter your choice:3

Stack is not full

1.Push
2.Pop
3.isFull
4.isEmpty
5.Display
6.Exit
Enter your choice:4

Stack is not Empty

1.Push
2.Pop
3.isFull
4.isEmpty
5.Display
6.Exit
Enter your choice:5
 10 20 30 40
1.Push
2.Pop
3.isFull
4.isEmpty
5.Display
6.Exit
Enter your choice:6
*/
