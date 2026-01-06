#include<iostream>
using namespace std;

void rowSum(int arr[][4] , int m , int n)
    {
        for(int row = 0 ; row < m ;row++)
            {
                
                    int sum = 0;

                for(int col = 0 ; col < n ;col++)
                    {
                        sum = sum + arr[row][col];
                        
                    }
               cout<<sum<<" ";
            }
    }

void colSum(int arr[][4] , int m , int n)
    {

        for(int col = 0 ; col < n ;col++)
            {
                
                    int sum = 0;

                for(int row = 0 ; row < m ;row++)
                    {
                        sum = sum + arr[row][col];
                        
                    }
               cout<<sum<<" ";
            }

    }

int main()
    {
        int arr[3][4];

        cout<<"Enter the array elements : ";
        for(int row = 0 ; row < 3 ;row++)
            {
                for(int col = 0 ; col < 4 ;col++)
                    {
                        cin>>arr[row][col];
                    }
            }


        for(int row = 0 ; row < 3 ;row++)
            {
                for(int col = 0 ; col < 4 ;col++)
                    {
                        cout<<arr[row][col]<<" ";
                    }
                cout<<endl;
            }

            
        // rowSum(arr, 3 , 4);
        colSum(arr, 3 , 4);
    }