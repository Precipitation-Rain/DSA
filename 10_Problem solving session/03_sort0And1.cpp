#include<iostream>
using namespace std;

void printarray(int arr[] , int size){
    for(int i = 0; i< size ; i++){
        cout<<arr[i]<<" ";
    }
}

void Sort(int arr[] , int size){
    int i = 0;
    int j = size - 1;

    while(i < j){

        while(arr[i] == 0 && (i < j)){
            i++;
        }

        while(arr[j] == 1 && (i < j)){
            j--;
        }

        if(arr[i] == 1 && arr[j] == 0 && (i < j)){
            swap(arr[i], arr[j]);
        }

    }

}

int main(){

    int arr[7] = {1 ,1 ,0 ,1,1,0,0};
    int size = 7;
    printarray(arr , size);
    cout<<endl;
    Sort(arr , size);
    printarray(arr , size);


}