#include<iostream>
using namespace std;

inline int sum(int a,int b){    // <<<<< inline function. 
    return a+b;
}

int main(){
    int a,b;
    cout<<"Enter the value of A and value B "<<endl;
    cin>>a>>b;
    cout<<"The sum of value a and b is :"<<sum(a,b)<<endl;
    cout<<"The sum of value a and b is :"<<sum(a,b)<<endl;
    cout<<"The sum of value a and b is :"<<sum(a,b)<<endl;
    return 0;
}

/*
inline function use this is no more this value copy he is the one time copy

And this no use inline funtion ==   Recursen , static Variable.

*/