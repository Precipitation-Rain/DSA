#include<iostream>
using namespace std;

void largestRowSum(int arr[][3] , int m , int n)
    {
        int max = 0  , rowindex;
        for(int row = 0 ; row < m ;row++)
        {
            int sum = 0;
            for(int col = 0 ; col < n ;col++)
                {
                    sum = sum + arr[row][col];
                }

            if(sum > max)
                {
                    max = sum;
                    rowindex = row;
                }

        }

        cout<<"Maximum row wise sum is "<<max<<" And row is "<<rowindex<<endl;
    }

void largestColSum(int arr[][3] , int m , int n)
    {
        int max = 0  , columnindex;
        for(int col = 0 ; col < n ;col++)
        {
            int sum = 0;
            for(int row = 0 ; row < n ;row++)
                {
                    sum = sum + arr[row][col];
                }

            if(sum > max)
                {
                    max = sum;
                    columnindex = col;
                }

        }

        cout<<"Maximum column wise sum is "<<max<<" And column is "<<columnindex<<endl;
    }

int main()
{
    int arr[3][3];

    cout<<"Enter array elements : ";
    for(int row = 0 ; row < 3 ;row++)
        {
            for(int col = 0 ; col < 3 ;col++)
                {
                    cin>>arr[row][col];
                }
        }

   for(int row = 0 ; row < 3 ;row++)
        {
            for(int col = 0 ; col < 3 ;col++)
                {
                    cout<<arr[row][col]<<" ";
                }
                cout<<endl;
        }

    largestRowSum(arr , 3 , 3);
    largestColSum(arr , 3 , 3);
}