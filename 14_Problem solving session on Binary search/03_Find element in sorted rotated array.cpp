#include<iostream>
using namespace std;

int searchingelement(int arr[] , int size , int key){

    int start = 0;
    int end = size - 1;
    int ans = -1;

    int mid = start + (end - start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        else if((arr[mid] < arr[mid + 1])){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
        
    }

    return ans;

}

int main(){
    int arr[50] = {7,1,2,3,4};
    int size = 5;
    int key = 1;

    int ans = searchingelement(arr , size , key);
    cout<<"The key is present at index "<<ans<<endl;

}