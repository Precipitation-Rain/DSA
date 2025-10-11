#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    //we are taking number bu assuming it is binary but actually it is int so we have to write logic accoridng to it.

    int ans = 0,i = 0;
    
    while( n != 0){
        int digit = n % 10;

        if(digit == 1){
            ans = ans + pow(2 , i);
        }
        
        i++;

        n = n/10;
    }
    cout<<"Ans = "<<ans<<endl;

}