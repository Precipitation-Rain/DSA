#include<iostream>
using namespace std;

int main()
    {
        char name[20];

        //cin ka behaviour

        // tab enter and space ko input nahi leta.
        cout<<"Enter Your name : ";
        cin>>name;


        //cout ka behaviour
        cout<<"Your name is : "<<name<<endl;

        // ' /0 ' known as null string => tells string kaha khatam hoti hain
        name[2] = '\0';
        cout<<"Your name is : "<<name<<endl;


    }