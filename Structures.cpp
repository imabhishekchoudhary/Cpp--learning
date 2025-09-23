#include<iostream>
using namespace std;

struct employee 
{
    int id;
    char favChar;
    float salary;
};

int main(){
    struct employee abhi;
    abhi.id =1;
    abhi.favChar ='k';
    abhi.salary = 10000000;
    cout<<"id is: "<<abhi.id<<endl;
    cout<<"char is: "<<abhi.favChar<<endl;
    cout<<"salary is: "<<abhi.salary<<endl;

    return 0;
}

// Structure is the  User define data type.