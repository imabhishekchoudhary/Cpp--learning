/* Array :- An array is a collection of iteams of similar type
            stored in contiguous memory location.
*/

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

    // This in this loop he is the best mehod and short this code.
    cout<<"Array in loop :-"<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<"The value of marks "<<i<<" is:  "<<marks[i]<<endl;
    }
    return 0;
}