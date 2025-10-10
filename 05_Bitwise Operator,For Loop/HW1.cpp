#include<iostream>
using namespace std;

int main(){
    // for(int i = 0; i<=5 ; i++){
    //     cout<<i<<" ";
    //     i++;
    // }

    //   for(int i = 0; i<=5 ; i--){
    //     cout<<i<<" ";
    //     i++;

        // 0,3,6,9,12,15
        

    //     for(int i = 0; i<=15 ; i += 2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }

    for(int i = 0;i<=5;i++) //balak yaha pe <= hain isliye vo 55 nahi aaya kyunki unki addition 10 hogayi and loop break ho gaya.
    {
        for(int j = i; j<=5;j++){
            if(i + j ==10){
                break;
            }
            cout<<i<<j<<" ";
        }
    }

    }
