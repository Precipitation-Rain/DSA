#include<iostream>
using namespace std;

int GetSum(int * arr , int size)
    {

        // base case
        if(size == 0)
            {
                return 0;
            }
        if(size == 1)
            {
                return arr[0];
            }

        //preprocessing

        int sum = arr[0] + GetSum(arr + 1 , size - 1);
        return sum;

    }

int main()
    {
        int arr[] = {6,5,2,6,1};
        int size = 5;

        int sum = GetSum(arr , size);
        cout << "Sum is : "<<sum << endl;

    }