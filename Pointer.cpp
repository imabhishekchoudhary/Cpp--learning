#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int *p = &x;
    cout<<"The value of a is:"<<x<<endl;
    cout<<"The address of a is :"<<&x<<endl;
    cout<<"The address of a is :"<<p<<endl;
    cout<<"The value at address p is :"<<*p<<endl;

// >>>> pointer to pointer <<<<

    int **c=&p;
    cout<<"The address of p is :"<<&p<<endl;
    cout<<"The address of c is :"<<c<<endl;

    cout<<"The value is p is:"<<**c<<endl;
    return 0;
}

//   >>> Pointer:- Pointer is the data type which holds the address of other data types
//  >>> &:- Address of operator
//  >>> *:- Dereference operator