#include<iostream>
using namespace std;

int main()
    {
        // bad practice
        /*
        int *ptr;
        cout<<ptr;
        cout<<*ptr;
        */

        //codin mcq

        int num = 5;
        int *ptr1 = &num;
        cout<<ptr1<<" "<<*ptr1<<endl;


        int *ptr2 = 0; // null pointer

        // ptr2 = &num;
        // ptr2 = ptr1;
        // *ptr2 = *ptr1; // bad practice caz you don't know about ehat ptr 2 contain.
        // ptr2 = &ptr1; // pointer will hold only address and addres of varible not anaother pointer
         ptr2 = ptr1; // ptr2 = &num;
         
        // *ptr2 = &num = > not allowed
        
        cout<<ptr2<<" "<<*ptr2;






    }