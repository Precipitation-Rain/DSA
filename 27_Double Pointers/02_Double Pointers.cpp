#include<iostream>
using namespace std;

void update(int **ptr2) // call by value
    {
        // ptr2  =  ptr2  + 1;
        // kya p2 me koi change hoga => nahi

        //  *ptr2  =  *ptr2  + 1;
        // // kya p2 me koi change hoga => ha hoga

        **ptr2  =  **ptr2  + 1;
        // // kya p2 me koi change hoga =>



    }

int main()
    {
        int i = 5;
        int* ptr = &i ;
        int** ptr2 = &ptr;

        /*
        cout << i << endl;
        cout << *ptr << endl;
        cout << **ptr2 << endl;

        cout << &i << endl;
        cout << ptr << endl;
        cout << *ptr2 << endl; 
        
        cout << &ptr << endl;
        cout << ptr2 << endl;

        cout << &ptr2 << endl;
        */

       

        
        cout <<"Before : "<<endl;
        cout << i << endl;
        cout << ptr << endl;
        cout << ptr2 << endl;

        update(ptr2);

        cout <<"After : "<<endl;
        cout << i << endl;
        cout << ptr << endl;
        cout << ptr2 << endl;       




    }