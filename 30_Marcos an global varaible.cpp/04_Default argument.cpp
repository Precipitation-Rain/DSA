#include<iostream>
using namespace std;

void printArray(int *arr , int size , int start = 0) // int start = 0 known as default argument
// always start the default argument from rightmost position , bich me se start mat karna
    {
        for(int i = start ; i < size ; i++)
            {
                cout << arr[i] << " ";
            }
    }

int main()
    {

        int size = 5;
        int arr[] = { 1,2 ,3,4,5};

        printArray(arr , size , 3);
        cout << endl;
        printArray(arr , size );
    }