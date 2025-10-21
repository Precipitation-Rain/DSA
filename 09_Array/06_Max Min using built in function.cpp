#include<iostream>
using namespace std;

int getMax(int array[], int size){


       int maxi = INT64_MIN;
    for(int i = 0; i< size ; i++){
     
        // if(array[i] > max){
        //     max = array[i];
        // }
        maxi = max(maxi,array[i]);
    }

    return maxi;
}


int getMin(int array[], int size){


    int mini = INT64_MAX;

    
    for(int i = 0; i< size ; i++){
     
    //     if(array[i] < min){
    //         min = array[i];
    //     }

    mini = min(mini,array[i]);
     }

    return mini;
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