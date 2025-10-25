#include<iostream>
using namespace std;



void swap(int arr[] , int size){

    for(int i = 0; i<size ;i+=2){

    if((i + 1) < size){
        swap(arr[i],arr[i+1]);

        }
    }
}

void printarray(int arr[],int size){
    for(int i = 0; i< size ; i++){
        cout<<arr[i]<<" ";
    }

}



int main(){

    int even[8] = {12,14,16,18,22,24,26,28};
    int odd[7] = {9,3,1,7,5,3,9};

    printarray(even , 8);
    cout<<endl;
    swap(even , 8);
    printarray(even , 8);

    cout<<endl;
    cout<<endl;

    printarray(odd , 7);
    cout<<endl;
    swap(odd,7);
    printarray(odd , 7);

}