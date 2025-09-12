#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int product = 1;
    int sum = 0;

    while(n != 0){

       int digit =  n % 10;
       //45 % 10 = 5

       product = product *digit;
       sum = sum + digit;

       n = n/10;

       //456 / 10 = 45
       
    }

    cout<<"Ans is "<<(product-sum);

}
//from given no calculate product of digits and sum of digits and minus them