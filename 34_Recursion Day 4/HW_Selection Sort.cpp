#include<iostream>
using namespace std;

void SelectionSort(int arr[] , int size , int i)
    {

        // base case
        if(  i == (size - 1))
            {
                return;
            }

        // ek case me khud solve kar leta hun baki recursion dekh lega!
        int minIndex = i;
        
        for(int j = i + 1; j < size ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
         swap(arr[i] , arr[minIndex]);


        // baki recursion dekh lega
        SelectionSort(arr , size , i+1);

    

    }

int main()
    {
        int arr[] = {2,4,1,8,5,7,9};
        int size = 7;
        

        SelectionSort(arr , size , 0);

        for(int i = 0 ; i < size ; i++)
            {
                cout << arr[i] << " ";
            }
    }