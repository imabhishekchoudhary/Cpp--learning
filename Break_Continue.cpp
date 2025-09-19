#include<iostream>
using namespace std;

int main(){

// >>>>>>>   Break Statement  <<<<<<<<

    cout<<"Break statement"<<endl;

    for (int i = 1; i < 10; i++)
    {
        if(i==3){
            break;
        }
        cout<<i<<endl;
    }


// >>>>>> Continue Statement <<<<<<<<<<<

    cout<<"Continue Statement"<<endl;

    for(int i=1;i<10;i++)
    {
        if(i==3){
            continue;
        }
        cout<<i<<endl;
    }
    
}
// break is exit this loop.
// Continue is the value this skip and after the continue write the value.