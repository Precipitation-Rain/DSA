#include<iostream>
using namespace std;

int main(){
    int a , b;

    cout<<"Enter a and b: ";
    cin>>a>>b;
    int count = 0;
    int value = 0;

    while(a != 0){
        if(a & 1 == 1){
            count++;
            a = a >> 1;
        }
        else{
            a = a >> 1;
        }

    }

 while(b != 0){
        if(b & 1 == 1){
            value++;
            b = b >> 1;
        }
        else{
            b = b >> 1;
        }

    }


    cout<<"Count of set bits in First and Second number is: "<<(count + value);
}