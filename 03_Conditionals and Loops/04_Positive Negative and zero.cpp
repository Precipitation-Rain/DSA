#include<iostream>
using namespace std;

int main(){
    int a;

    cout<<"Enter the value of a: " << endl;
    cin>>a;

    // if(a > 0){
    //     cout<<"A is positive";
    // }

    // else{

    //     if(a < 0){
    //         cout<<"A is negative";
    //     }
    //     else{
    //         cout<<"A is 0";
    //     }
    // }


    // else if block

    if (a > 0){
        cout<<"A is Positive";
    }

    else if(a < 0){
        cout<<"A is Negative";
    }
    else{
        cout<<"A is 0";
    }
}

// what if the nested if else become so so nested then use else if 


