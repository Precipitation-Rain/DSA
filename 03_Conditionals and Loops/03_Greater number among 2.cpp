#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    if(a > b){
        cout<<"A is greater";
    }
    if(b > a){
        cout<<"B is greater";
    }


}

// cin and cin.get()
/*
cin don't read space,enter and tab
cin.get() reads space,tab and enter and display their ascii value

cin>>a>>b -> this take a and b as input respectively
*/