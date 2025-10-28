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
    int arr[100] = {2,3,3,3,3,3,4,7};
    int size = 8;
    int key = 3;
    cout<<"No of occurance of "<<key<<" is: "<<(lastoccurance(arr,size,key) - firstoccurance(arr,size,key)) + 1<<endl;
    


}