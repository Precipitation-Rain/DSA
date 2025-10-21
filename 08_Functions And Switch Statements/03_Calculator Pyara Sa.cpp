#include<iostream>
using namespace std;

int main(){

    int a,b;
    char op;

    cout<<"Enter the value of a"<<endl;
    cin>>a;

    cout<<"Enter the value of b"<<endl;
    cin>>b;

    cout<<"Enter the operationr you want to perform"<<endl;
    cin>>op;

    switch(op){

        case '+':cout<<(a + b)<<endl;
                break;

        case '-':cout<<(a - b)<<endl;
                break;

        case '*':cout<<(a * b)<<endl;
                break;

        case '/':{
            cout<<(a / b)<<endl;
            
        }
        break;

        case '%':cout<<(a%b)<<endl;
                break;

        default :
        cout<<"Bhaisaab Sahi operation enter karo!";
    }




}