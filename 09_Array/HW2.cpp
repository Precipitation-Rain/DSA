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
    int end = 1;

    while(end < size){
        swap(arr[start] , arr[end]);
        start= start + 2;
        end= end + 2;
    }
}

int main(){
    int arr[7] = {12,23,34,0,-4,7,43};
    int brr[8] = {12 , 23 ,34,9,-3,0,7,6};

    cout<<"Before Reverse: "<<endl;
    printarray(arr,7);
    printarray(brr , 8);

    cout<<endl;
    cout<<endl;

    reverse(arr,7);
    reverse(brr,8);

    //  cout<<endl;
    // cout<<endl;

    cout<<"After Reverse: "<<endl;
    printarray(arr,7);
    printarray(brr , 8);



}