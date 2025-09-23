#include<iostream>
using namespace std;

int main(){
    int marks[5]={10,15,20,25,30};

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    // change the value of in array 
    marks[2]=33;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    int *p = marks;
    cout<<*p;
    return 0;

}