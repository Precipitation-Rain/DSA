#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter charater: ";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"It is Lowecase Character";
    }

    else if(ch>='A' && ch<='Z'){
        cout<<"It is Uppercase Character";
    }

    else if(ch>='0' && ch<='9'){
        cout<<"It is Digit Character";
    }

    else{
        cout<<"Pagal hain kya!";
    }
    
}