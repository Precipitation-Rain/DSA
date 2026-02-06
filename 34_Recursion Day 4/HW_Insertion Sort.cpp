
//         int j = i - 1;

//         for( ; j >= 0 ;j--){

//             if(arr[j] > temp){

//                 arr[j+1] = arr[j];
//             }

//             else{
//                 break;
//             }

//         }

//           arr[j + 1] = temp ;

#include<iostream>
using namespace std;

void InsertioSort(int arr[] , int size , int i)
    {

        // base case
        if(  i == size )
            {
                return;
            }

        
        // ek case me khud solve kar deta hun
        int temp = arr[i];
        int j = i - 1;

        for( ; j >= 0 ;j--){

            if(arr[j] > temp){

                arr[j+1] = arr[j];
            }

            else{
                break;
            }

        }
          arr[j + 1] = temp ;


        // baki recursion dekh lega
        InsertioSort(arr , size , i+1);

        
    

    }

int main()
    {
        int arr[] = {2,4,1,8,5,7,9};
        int size = 7;
        

        InsertioSort(arr , size , 1);

        for(int i = 0 ; i < size ; i++)
            {
                cout << arr[i] << " ";
            }
    }