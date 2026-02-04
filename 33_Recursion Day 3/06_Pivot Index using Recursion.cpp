#include<iostream>
using namespace std;

int pivotelement(int arr[] , int start , int end ){

     //base case

     if( start == end)
        return start;

       int mid = start + (end - start) / 2;

        if(arr[mid] >= arr[0])
            {
                
                return pivotelement(arr, mid + 1 , end);
               
            }

        else    
            {
                return pivotelement(arr, start , mid);
            }
            

}

int main(){
    int arr[10] = {12,17,18,3,4,5,6};
    int start = 0;
    int end = 7;
    
    int pivot = pivotelement(arr, start , end);
    cout<<"Pivot elemnt is present at: "<<pivot<<endl;
}