#include<iostream>
using namespace std;
int main()
{
    int a;

    cout<<"Enter the value of a"<<endl;
    cin>>a;

    // if(a>0)
    // {
    //     cout<<"Positive"<<endl;
    // }
    // else
    // {
    //     if(a<0)
    //     {
    //         cout<<"a is negative";
    //     }
    //     else{
    //         cout<<"a is 0";
    //     }
    // }

    if(a>0)
    {
        cout<<"a is positive"<<endl;
    }
    else if(a<0)
    {
        cout<<"a is negative"<<endl;
    }
    else{
        cout<<"a is 0";
    }

}