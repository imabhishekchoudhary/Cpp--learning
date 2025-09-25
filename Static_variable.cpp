#include<iostream>
using namespace std;

int sum(int a,int b){
    static int c=0;
    c = c+1; 
    return a+b+c;
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