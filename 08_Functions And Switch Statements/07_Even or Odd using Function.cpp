#include<iostream>
using namespace std;

bool evenodd(int num){

    // 1 -> even
    //0 -> odd
    if(num % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }

}







int main(){

int n;
cout<<"Enter the value of n: ";
cin>>n;

int ans = evenodd(n);

if(ans == 1){
    cout<<"Even No";

}
else{
    cout<<"Odd Number";
}


}