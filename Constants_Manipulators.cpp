#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // >>>>>> Change the value of a <<<<<
    int a = 33;
    cout<<"The value of a was:"<<a<<endl;
    a=45;
    cout<<"The value of a is:"<<a<<endl;

    // >>>> Constant's in C++ <<<<<<
    const int x=33;
    cout<<"\nThe value of x was:"<<x<<endl;
    //x=45;
    //cout<<"The value of x is:"<<x;


    // >>>> Manipulators in C++ <<<<<<
    int p=12,q=233,r=33456;
    cout<<"\nThe value of p without setw is:"<<p<<endl;
    cout<<"The value of q without setw is:"<<q<<endl;
    cout<<"The value of r without setw is:"<<r<<endl;

    cout<<"\nThe value of p with setw is:"<<setw(5)<<p<<endl;
    cout<<"The value of q with setw is:"<<setw(5)<<q<<endl;
    cout<<"The value of r with setw is:"<<setw(5)<<r<<endl;
    return 0;
    
}
/*Manipulators in C++
this is two types:
1. endl:-Use for the next line display.
2. setw():-use for the right side for the value.
*/