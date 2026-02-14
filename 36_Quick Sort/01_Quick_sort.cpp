#include<iostream>
using namespace std;

int partition(int arr[] , int start , int end)
    {

        int pivot = arr[start];
        int count = 0;

        for(int i = start + 1 ;  i <= end ;i++)
            {
                if(arr[i] <= pivot)
                    {
                        count++;
                    }
            }

        //placing the pivot at it's right index
        int pivotIndex = start + count;
        swap(arr[start] , arr[pivotIndex]);

        // the elements which are < pivot bring to left side and they are bigger bring to right side
        int i = start ;
        int j = end;

        while(i < pivotIndex && j > pivotIndex)
            {
                while(arr[i] <= arr[pivotIndex])
                    {
                        i++;
                    }

                while( arr[j] > arr[pivotIndex])
                    {
                        j--;
                    }

                if(i < pivotIndex && j > pivotIndex)
                    {
                        swap(arr[i++] , arr[j--]);
                    }

            }

        return pivotIndex;

    }

void quickSort(int arr[] , int start , int end)
    {

        if(start >= end)
            {
                return ;
            }

        //do partition
        int p = partition(arr , start , end);

        // left part sort karo
        quickSort(arr , start , p-1);

        //right part sort karo
        quickSort(arr , p+1 , end);


    }

int main()
    {
        int arr[] = {11,21,15,41,62,16,2,8,4,9};
        int n = 10;

        quickSort(arr , 0 , n - 1);

        for(int val : arr)
            {
                cout<<val <<" ";
            }


    }