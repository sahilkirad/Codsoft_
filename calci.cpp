#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first number=";
    cin>>a;
    cout<<"Enter second number=";
    cin>>b;
    char op;
    cout<<"Enter (a) for addition"<<endl;
    cout<<"Enter (b) for subtraction"<<endl;
    cout<<"Enter (c) for multiplication"<<endl;
    cout<<"Enter (d) for division"<<endl;
    cin>>op;
    switch(op)
    {
        case 'a':
            c=a+b;
            cout<<"Addition of  numbers="<<c<<endl;
            break;
        case 'b':
            c=a-b;
            cout<<"Subtraction of numbers="<<c<<endl;
            break;
        case 'c':
            c=a*b;
            cout<<"Multiplication of numbers="<<c<<endl;
            break;
        case 'd':
            if(b!=0){
            c=a/b;
            cout<<"Division of numbers="<<c<<endl;
            }
            else
            {
                cout<<"enter non zero value of b"<<endl;
            }
            break;
        default:
            cout<<"Invalid data";
            break;
    }
    return 0;
}
