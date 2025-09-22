#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;

    if(age<18){
        cout<<"You are not allow in this party."<<endl;
    }
    else if(age==18){
        cout<<"yor are the kid and come to party."<<endl;
    }
    else{
        cout<<"You are the Wallcome in this party.";
    }
    return 0;
}

/*>>> Control Structures <<<
This is basic three types:
1.Sequenc Structure
2.Selection  ' ' '
3.Loop   ' '  '
*/

// if_else  in not else statement & condition