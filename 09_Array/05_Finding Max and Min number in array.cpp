#include<iostream>
using namespace std;

int getMax(int array[], int size){


       int max = INT64_MIN;
    for(int i = 0; i< size ; i++){
     
        if(array[i] > max){
            max = array[i];
        }
    }

    return max;
}


int getMin(int array[], int size){


    int min = INT64_MAX;
    for(int i = 0; i< size ; i++){
     
        if(array[i] < min){
            min = array[i];
        }
    }

    return min;
}

int main(){
    int arr[5];
    int size = 5;

    //array input
    for (int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }

    int max = getMax(arr , size);

    int min = getMin(arr , size);

    cout<<"Max element in array is: "<<max<<endl;
    cout<<"Min element in array is: "<<min<<endl;
    
}