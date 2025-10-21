#include<iostream>
using namespace std;

void updation(int arr[] , int size){

    cout<<"Inside updation function: "<<endl;

        arr[2] = 450;
        
    for(int i = 0; i < size ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Going back to main function: "<<endl;


}

int main(){
    int num[5] = { 23,34,45,56,67};
    int size = 5;

    updation(num , size);

    cout<<"Inside main printing array: "<<endl;

    for(int i = 0; i < size ;i++){

        cout<<num[i]<<" ";
    }

}