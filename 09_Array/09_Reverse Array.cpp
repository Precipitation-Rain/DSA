#include<iostream>
using namespace std;

void printarray(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void reverse(int arr[] , int size){

    int start = 0;
    int end = size - 1;

    while(start <= end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[5] = {12,23,34,0,-4};
    int brr[6] = {12 , 23 ,34,9,-3,0};

    cout<<"Before Reverse: "<<endl;
    printarray(arr,5);
    printarray(brr , 6);

    cout<<endl;
    cout<<endl;

    reverse(arr,5);
    reverse(brr,6);

    //  cout<<endl;
    // cout<<endl;

    cout<<"After Reverse: "<<endl;
    printarray(arr,5);
    printarray(brr , 6);



}