#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;

    switch (age)
    {
    case 13:
        cout<<"Your are the student"<<endl;
        break;
    case 45:
        cout<<"You are the teacher"<<endl;
        break;
    case 6:
        cout<<"You are kid"<<endl;    
    default:
    cout<<"plese given under case !";
        break;
    }

cout<<"Well done";
}

// in this case in break is the exicuit the case after the exit.
// When break statment no write then all the case print.
