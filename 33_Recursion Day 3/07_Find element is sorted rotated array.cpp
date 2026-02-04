#include<iostream>
using namespace std;


int findingPivotIndex(int arr[] , int start , int end ){

     //base case

     if( start == end)
        return start;

       int mid = start + (end - start) / 2;

        if(arr[mid] >= arr[0])
            {
                
                return findingPivotIndex(arr, mid + 1 , end);
               
            }

        else    
            {
                return findingPivotIndex(arr, start , mid);
            }
            

}

int binarySearch(int arr[] , int start , int end ,int element , int pivotIndex){

        // base case
        if( start > end)
            return -1;

        //preprocessing
        
        int mid = start + (end - start) / 2;

        if(arr[mid] == element)
            {
                return mid;
            }
        
        else if( arr[mid] < element)
                {
                    return binarySearch( arr , mid + 1 , end , element , pivotIndex);
                }

        else    
                {
                    return binarySearch( arr , start , mid - 1 , element , pivotIndex);
                }
    

}

int main(){
    int arr[50] = {4 ,5 ,6 ,8,9, 1, 2, 3};
    int size = 8;

    int start = 0;
    int end = size -1 ;
    
    
    
    int pivotIndex =  findingPivotIndex(arr , start , end);
    // cout << "Pivot Index : "<< pivotIndex <<endl;

    // int mid = start + (end - start) / 2;
    int isPresent;
    int key = 1;

    if( key >= arr[0])
            {
                 isPresent = binarySearch( arr , 0 , pivotIndex - 1 , key , pivotIndex);
                 cout << "Element is present at index : "<<isPresent;
            }

    
        else    
            {
                isPresent = binarySearch( arr ,  pivotIndex  , end ,  key , pivotIndex);
                cout << "Element is present at index : "<<isPresent;
            }



}