#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    bool isPrime = 1;

    for (int i = 2 ; i<n ; i++){
        if(n%i == 0){
            // cout<<"Not a prime";
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 0){
        cout<<"Not Prime Number";
    }
    else{
        cout<<"It is a Prime Number";
    }

}