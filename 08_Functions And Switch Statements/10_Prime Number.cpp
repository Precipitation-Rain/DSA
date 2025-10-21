#include<iostream>
using namespace std;

bool isPrime(int n){

    // 0 -> notPrime
    // 1 -> prime

    for(int i = 2 ; i<n ; i++){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    isPrime(n);

    if(isPrime(n)){
        cout<<"Yes,It is a Prime Number";
    }

    else{
        cout<<"No,It is not a Prime Number";
    }
}
