//         for(int j = i + 1; j < n ; j++){
//             if(arr[j] < arr[minIndex]){
//                 minIndex = j;
//             }


#include<iostream>
using namespace std;

void bubbleSort(int arr[] , int size)
    {

        // base case
        if( size == 0 || size == 1)
            {
                return;
            }

        // 1 case me solve kar deta hun
        for(int i = 0 ; i < size - 1 ; i++)
            {
                if(arr[i] > arr[i+1])
                    {
                        swap(arr[i],arr[i+1]);
                    }
            }

        // baki recursion dekh lega

        bubbleSort(arr , size - 1);

    }

int main()
    {
        int arr[] = {2,4,1,8,5,7,9};
        int size = 7;

        bubbleSort(arr , size);

        for(int i = 0 ; i < size ; i++)
            {
                cout << arr[i] << " ";
            }
    }