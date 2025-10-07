//while loop

/*
syntax:

while(condition){
// block of code;
}

jabtak condition true hain tabatak vo block of code execute karo.

*/

# include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;

    int i =1;
    while(i <= n ){
        cout<<i<<endl;
        i = i + 1;
    }
}