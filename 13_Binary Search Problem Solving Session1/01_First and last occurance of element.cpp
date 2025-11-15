#include<iostream>
using namespace std;

int firstouccrance(int arr[] , int size , int target){

    int start = 0;
    int end = size - 1;
    int ans = -1;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }

        else if (arr[mid] < target){
            start = mid + 1;
        }

        else if (arr[mid] > target){
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;

}

int lastouccrance(int arr[] , int size , int target){

    int start = 0;
    int end = size - 1;
    int ans = -1;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == target){
            ans = mid;
            start = mid + 1;
        }

        else if (arr[mid] < target){
            start = mid + 1;
        }

        else if (arr[mid] > target){
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;

}

int main(){
    int even[100] ={1,2,3,4,4,4,4,5};
    int size =  8;
    int target = 4;

    cout<<"First occurrence of "<<target<<" is "<<firstouccrance(even , size , target)<<endl;
    cout<<"Last occurrence of "<<target<<" is "<<lastouccrance(even , size , target);


}