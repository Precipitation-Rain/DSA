#include<iostream>
using namespace std;

int pivotelement(int arr[] , int size){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start < end){

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            
            end = mid;
        }

        mid = start + (end - start)/2;

    }
    return start;

}

int main(){
    int arr[10] = {4,5,6,1,2,3};
    int size = 6;
    int pivot = pivotelement(arr,size);
    cout<<"Pivot elemnt is present at: "<<pivot<<endl;
}