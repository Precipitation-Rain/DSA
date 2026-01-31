#include<iostream>
using namespace std;

bool linearSearch(int * arr , int size , int elementToFound)
    {
        //base case
        if(size == 0)
            {
                return false;
            }

        //preprocessing

        if(arr[0] == elementToFound)
            {
                return true;
            }
        else
            {
                bool checkRemaining = linearSearch(arr + 1 , size - 1,elementToFound);
                return checkRemaining;
            }
    }

int main()
    {
        int arr[] = {4,6,7,2,9};
        int size = 5;

        int elementToFound ;
        cout <<"Enter element to search : ";
        cin>> elementToFound;

        bool isFound = linearSearch(arr , size , elementToFound);

        if(isFound)
            {
                cout <<"Element is Present"<<endl;
            }
        else
            {
                cout <<"Element is not Present" << endl;
            }
    }