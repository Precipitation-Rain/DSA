#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int first = 1;
    int last = 100;

    float sum =  (n*(first + last))/2;

    cout<<"Sum : "<< sum;
}