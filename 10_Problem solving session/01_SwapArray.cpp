//swap alternate
// i/p : [2,3,4,5] , o/p = [3,2,5,4]

#include<iostream>
using namespace std;


void printarray(int arr[] , int size){
    for(int i = 0 ; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapalternate(int arr[] , int size){

    for(int i = 0; i<size ; i+= 2){
        if((i + 1) < size) // in case of odd array
        {
            swap(arr[i] , arr[i+1]);
        }
    }
}

int main(){
    int even[8] = {9,8,7,6,5,4,3,2};
    int odd[7] = {12,23,34,45,56,67,78};

    swapalternate(even , 8);
    printarray(even , 8);

    cout<<endl;

    swapalternate(odd , 7);
    printarray(odd , 7);

}