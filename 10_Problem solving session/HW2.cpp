//duplicates pairs
/*
1.return array(more than 1 element)

*/
#include<iostream>
using namespace std;

void duplicate(int arr[] , int n){

    for(int i = 0; i<n ; i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }

}

int main(){
    int nums[10]={1,3,3,4,4,5,7,7,9,9};
    int n = 10;

   duplicate(nums,n);
}