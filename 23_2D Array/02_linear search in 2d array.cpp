#include<iostream>
using namespace std;

// function declaration
bool search(int arr[][4] , int target , int m , int n);

int main()
    {
        int arr[3][4];

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

        int target;
        cout<<"Enter element to search : ";
        cin>>target;
    
        if(search(arr , target , 3 , 4))
            {
                cout<<"Element is present";
            }
        else    
            {
                cout<<"Element is not present";
            }
    }

bool search(int arr[][4] , int target , int m , int n)
    {

        for(int row = 0 ; row < m ; row++)
            {
                for(int col = 0 ; col < n ;col++)
                    {
                        if(arr[row][col] == target)
                            {
                                return 1;
                            }
                    }
            }
        return 0;
    }

