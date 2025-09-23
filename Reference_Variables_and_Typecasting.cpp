#include<iostream>
using namespace std;

int c=33;

int main(){

// >>>>>>> Build in Data types <<<<<<<<<<<
    cout<<"Build in Data type"<<endl;

    int a,b,c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    c = a+b;
    cout<<"The sum is:"<<c<<endl;

    cout<<"The Global c is:"<<::c<<endl;
//>>>>>>>>> Float,Double and long double literals <<<<<<<<
    cout<<"\nFloat,Double and long double literals"<<endl;

    float d =33.3F;//33.3
    long double e=33.3L;//33.3
    cout<<"The size of 33.3 is "<<sizeof(33.3)<<endl;   //endl is the next line start
    cout<<"The size of 33.3f is "<<sizeof(33.3f)<<endl; 
    cout<<"The size of 33.3F is "<<sizeof(33.3F)<<endl; 
    cout<<"The size of 33.3l is "<<sizeof(33.3l)<<endl; 
    cout<<"The size of 33.3L is "<<sizeof(33.3L)<<endl;

//>>>>>>>>> Reference Variables <<<<<<<<<<<<<
    cout<<"\nReference Variables"<<endl;

    int x=6043;
    int &y=x;
    cout<<x<<endl;
    cout<<y<<endl;

// >>>>>>>> Typecasting <<<<<<<<<<<<
    cout<<"\nTypecasting"<<endl;

    int p = 40;
    float q =43.4;
    cout<<"The value q is:"<<int(q)<<endl;
    cout<<"The value q is:"<<(float)q<<endl;

    return 0;
}