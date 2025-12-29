#include<iostream>
using namespace std;
// #include<array>

void merge(int arr1[] , int n , int arr2[] , int m , int arr3[] )
    {

        int i = 0 , j = 0,k = 0;
        while(i < n && j < m)
            {
                if(arr1[i] < arr2[j])
                    {
                        arr3[k] = arr1[i];
                        i++;
                        k++;
                    }

                else
                    {
                        arr3[k] = arr2[j];
                        j++;
                        k++;
                    }
            }

        while( i < n)
            {
                arr3[k] = arr1[i];
                i++;
                k++;
            }


        while( j < n)
            {
                arr3[k] = arr1[j];
                j++;
                k++;
            }

// return arr3;
    }


void print(int arr3[],int k)
    {
        for(int i = 0 ; i < k ;i++ )
            {
                cout<<arr3[i]<<" ";
            }
    }

int main()
        {
            int arr1[5] = {2,5,8,10,14};
            int arr2[6] = {1,3,4,6,9,11};
            int arr3[11] = {0};

            merge(arr1,5,arr2,6,arr3);

            print(arr3,11);

        }
