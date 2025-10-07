#include<iostream>
using namespace std;

int main(){
    int c;
    cout<<"Enter Celcius : ";
    cin>>c;

    float ctf = (c*9/5) + 32;

    cout<<c<<" celcius = "<<ctf<<" Farhenite";
}