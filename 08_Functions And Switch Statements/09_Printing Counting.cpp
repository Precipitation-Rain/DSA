#include<iostream>
using namespace std;

//Function signature -> function kya return karta hain
//When function does not return anything we use void as return typre which means function returns nothing.
//you can use return statement in void function , but use only return not any value , bas return keyword likh sakte ho uske sat koi value nahi likh sakte

void counting(int num){

    for(int i = 1; i<= num ; i++){
        cout<<i<<" ";
    }



}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    //function call
    counting(n);
}