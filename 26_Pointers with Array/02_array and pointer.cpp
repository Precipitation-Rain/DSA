#include<iostream>
using namespace std;

int main()
    {
        /*
        int arr[10] = {2 ,45,65,412};

       
        int * ptr = arr;

        cout<< ptr[2] << endl;

        cout<<ptr[1]<<endl;

        cout<< *ptr << endl;
        cout<<sizeof(ptr)<<endl;
        cout<<sizeof(arr)<<endl;

        cout<< arr << " "<<  ptr <<endl;

            */

        // size

        /*
        int arr[10] = {2 ,45,65,412}; 
        int * ptr = arr;
        
        cout<< arr << endl;

        cout << sizeof(arr) << endl;
        cout<< sizeof(ptr[2]) <<endl;
        cout<< sizeof(&ptr[2]) <<endl;
        cout<< sizeof(ptr) <<endl;
        cout<< sizeof(*ptr) <<endl;
        */


        // and operator
    /*
        int arr[10] = {2 ,45,65,412}; 
        int * ptr = arr;

        cout<< &arr << " "<< arr << " "<< &arr[0] << endl;
        cout<< &ptr << endl;

        cout << ptr << " " << &arr[0] << endl;
    */

        // symbol table;
        int arr[10] = {2 ,45,65,412}; 
        int * ptr = arr;

        // arr = *arr + 1; nahi ho sakta
        // cout<<arr;

        cout<< &ptr << endl;
        cout << ptr << endl;
        ptr++;
        cout << ptr << endl;
        cout<< &ptr << endl;
    







    }