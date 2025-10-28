#include<iostream>
using namespace std;

int firstoccurance(int arr[],int size , int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = (start + ((end - start)/2)) ;

    while(start <= end){
        if(key == arr[mid]){
            ans = mid;
            end = mid - 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }

        else if (key > arr[mid]){
            start = mid + 1;
        }

        mid = (start + ((end - start)/2)) ;
     
    }
   return ans;
}

int lastoccurance(int arr[],int size , int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = (start + ((end - start)/2)) ;

    while(start <= end){
        if(key == arr[mid]){
            ans = mid;
            start = mid + 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }

        else if (key > arr[mid]){
            start = mid + 1;
        }

        mid = (start + ((end - start)/2)) ;
     
    }
   return ans;
}


int main(){
    int arr[7] = {2,3,3,4,7};
    int size = 7;
    int key = 3;
    cout<<"First occurance of "<<key<<" is: "<<firstoccurance(arr,size,key)<<endl;
    cout<<"Last occurance of "<<key<<" is: "<<lastoccurance(arr,size,key)<<endl;


}