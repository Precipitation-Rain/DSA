#include<iostream>
using namespace std;
int main()
    {

        // // creation of void pointer

        /*
        int i=10;
        char ch='a';
        void *vp= &i;
        vp=&ch;

        cout << vp << endl;
        */


        //derefrencing of void pointer

        /*
        int i=15;  
        void *ptr;
        ptr=&i;  
        printf("%d", * (int*) ptr);
        return 0; 
        */


        //arithemetic operations

        /*
    float arr[3]={1.5,2.3,5.4};
    void *ptr;
    ptr=arr;
    for(int i=0;i<3;i++)
    {
       printf("%.1f\n", *(float *)ptr); //also known as address typecasting
       ptr=(float*)ptr+1; // cannot write ptr=ptr+1.
    }
        */

    // address typecasting
    int x = 756;
    int *p = &x;

    cout << p << endl;
     cout << *p << endl;

        char ch = 'a';
    char* ptr = (char*)&x;   // address typecasting
    cout << *ptr << endl;
     cout << ptr << endl;
     cout << &ptr << endl;


    }