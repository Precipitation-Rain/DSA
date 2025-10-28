#include<iostream>
using namespace std;

int pivot(int arr[],int size){

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
    //you can retunr and
}

int main(){
    int arr[5] = {2,3,7,9,1};
    int size = 5;

    cout<<"Pivot is present at "<<pivot(arr , size)<<endl;
}