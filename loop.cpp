#include<iostream>
using namespace std;

int main(){
//>>>> For loop in C++ <<<<
    cout<<"using for loop"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"\n";
        cout<<i;
    }

   // infinite for loop

    // for(int i=0;10<=20;i++)
    // {
    //     cout<<"\n";
    //     cout<<i;
    // }

// >>>>>> While loop <<<<<<<<<<
    cout<<"\nusing while loop"<<endl;

    int i=1;
    while(i<=10)
    {
        cout<<i<<endl;
        i++;
    }

// >>>>>> do-while loop <<<<<<<
    cout<<"using do-while loop"<<endl;

    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=5);
    return 0;

}

/*loop's are three types
1.For loop
2.While loop
3.do-While
*/