#include<iostream>
using namespace std;

void printarray(int arr[] , int size){
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int array[12] = {1 , 5 };
    int size = 12;

    printarray(array,size);
}