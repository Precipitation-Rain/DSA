#include<iostream>
using namespace std;

bool checkIsSorted(int *arr , int size)
    {

        //base case
        if(size == 0 || size == 1)
            {
                return true;
            }

        //preprocessing

        if(arr[0] > arr[1])
            {
                return false;
            }

        else
            {
                bool remainingPart = checkIsSorted(arr + 1 , size -1);
                return remainingPart;
            }
    }


int main()
    {
        int arr[] = {2,3,9,9,9};
        int size = 5;

        bool isSorted = checkIsSorted(arr , size);

        if(isSorted)
            {
                cout << "Array is sorted " << endl;
            }
        else
            {
                cout << "Array is not sorted " << endl;
            }
    }