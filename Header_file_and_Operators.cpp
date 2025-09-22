#include<iostream>
using namespace std;

int main(){
    // Arithmetic Operators
    cout<<"Arithmetic operators in C++";

    int a=10,b=4;
    cout<<"\nThe value of a + b is:"<<a+b;
    cout<<"\nThe value of a - b is:"<<a-b;
    cout<<"\nThe value of a * b is:"<<a*b;
    cout<<"\nThe value of a / b is:"<<a/b;
    cout<<"\nThe value of a % b is:"<<a%b;
    cout<<"\nThe value of a++ is:"<<a++;
    cout<<"\nThe value of a-- is:"<<a--;
    cout<<"\nThe value of ++a is:"<<++a;
    cout<<"\nThe value of --a is:"<<--a;

    // Assignmment Operators
    // comparison operators
    cout<<"\n";
    cout<<"\nComparison operators in c++";
    
    cout<<"\nThe value of a == b is:"<<(a==b);
    cout<<"\nThe value of a != b is:"<<(a!=b);
    cout<<"\nThe value of a > b is:"<<(a>b);
    cout<<"\nThe value of a < b is:"<<(a<b);
    cout<<"\nThe value of a >= b is:"<<(a>=b);
    cout<<"\nThe value of a <= b is:"<<(a<=b);

    //Logic operators
    cout<<"\n";
    cout<<"\nLogical Operators i C++";
    cout<<"\nlogical and :"<<((a==b) && (a>b));// this '&&' is logical operattors colled..>and.

    cout<<"\nlogicl or :"<<((a==b) || (a>b));// this '||' is logical operattors colled..>or.

    cout<<"\nlogical not equalto :"<<!(a==b);
    return 0;
}


/*
Header files is two types:
1.System header files:- It comes with the compiler.
in this ..#include<iostream>

2.User defined header files:- It is written by the programmer.
in this ..#include"file.h" any this file created after the file open &run.
*/
