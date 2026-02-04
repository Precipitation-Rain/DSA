#include<iostream>
using namespace std;

bool binarySearch(int * arr , int start , int end , int element)
    {
        

        // base case
        if( start > end)
            return false;

        //preprocessing
        
        int mid = start + (end - start) / 2;

        if(arr[mid] == element)
            {
                return true;
            }
        
        else if( arr[mid] < element)
                {
                    binarySearch( arr , mid + 1 , end , element);
                }

        else    
                {
                    binarySearch( arr , start , mid - 1 , element);
                }

    }

int main()
    {
        int arr[] = {2,3,4,13,17,49};
        int size = 6;
        int element;
        
        cout <<"Enter element to seacrh : ";
        cin >> element;

        if(binarySearch(arr , 0 , size , element))
            {
                cout <<"Element is present " << endl;
            }
        else
            {
                cout <<"Element is not present " << endl;
            }

    }