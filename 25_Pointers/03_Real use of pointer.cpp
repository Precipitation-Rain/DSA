#include<iostream>
using namespace std;

int main()
    {

        //real use of pointer
        int num = 5;
        int a = num;

        cout<<"a before : "<<a<<endl;
        a++;
        cout<<"a after : "<<a<<endl;
        cout<<"Num : "<<num<<endl;

        int *p = &num;
        cout<<"Num before : "<<(num)<<endl;
        (*p)++;
        cout<<"Num after : "<<(num)<<endl;

        cout<<endl<<endl;


        // copying pointer into another

        int * q = p;
        
        cout<<q<<" "<<p<<endl;
        cout<<*q<<" "<<*p<<endl;

        cout<<endl<<endl;

        
        //pointer arithematic

        int i = 3;
        int *t = &i;
        cout<<  i  <<endl;
        cout<<  *t  <<endl;
        cout<<  t  <<endl;
        cout<<  &i  <<endl;

        cout<< (*t)++  <<endl;
        cout<<  i  <<endl;

        t = t + 1; // if we do addition or substraction in pointer it will point to next => multiplication and division is not allowed
        cout<<  t  <<endl;

        t = t + 1;
        cout<<  t  <<endl;

         t = t - 2;
        cout<<  t  <<endl;



    }