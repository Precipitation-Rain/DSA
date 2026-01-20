#include<iostream>
using namespace std;

int getSum(int * ptr , int n)
    {
        int sum = 0;

        for(int  i = 0 ; i < n ; i++)
            {
                sum = sum + ptr[i];
            }

        return sum;
    }

int main()
    {
        int n ;
        cin >> n;

        int * arr = new int[n];

        for(int i = 0 ; i < 5 ; i++)
            {
                cin>> arr[i];
            }

        int ans = getSum(arr , 5);

        cout << "Sum is : "<< ans << endl;


    }