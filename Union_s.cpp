#include<iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;

};

int main(){
    union money m1;
    m1.rice = 34;
    //m1.car ='o';
    
    
    cout<<"car :"<<m1.rice<<endl;
    return 0;

}

// Unions in this one intiger number run on the last point count.
