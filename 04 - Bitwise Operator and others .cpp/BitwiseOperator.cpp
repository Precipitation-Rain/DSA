#include<iostream>
using namespace std;

int main(){
        int n;
        cout<<"Enter value of n:"<<endl;
        cin>>n;


    // Pre increment/decrement and Post increment/decrement

    // int i =7;

    // cout<<i++<<"\n";
    //     //7 , i=8
    // cout<<++i<<endl;
    // //9,i=9
    //  cout<<i--<<"\n";
    // //9,i=8
    // cout<<--i<<endl;
    // //7,i=7

    //For loop

    // for(int i=1 ; i<=n ; i++){
    //     cout<<i<<endl;
    // }

    int i = 1;
    for(;;){
        if(i < n){
            cout<<i<<endl;
        }
        else{
            break;
        }
        
        i++;
    }
}