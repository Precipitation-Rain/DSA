#include<iostream>
using namespace std;

int main()
    {

        int i = 5;
        int *ptr = &i;

         cout << i << endl;
         cout << &i << endl;
         cout << ptr << endl;
         cout << *ptr << endl;
         cout << &ptr << endl;
         cout  << endl;    

        //  cout << *(0x61ff0c) << endl; not allowed

    }