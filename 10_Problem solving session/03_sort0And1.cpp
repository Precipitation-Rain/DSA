//sort 0 and 1

/* 3 ways:
1] using count
2] using sort function
3]two pointer approach
*/

//3.Two pointer approach 

/*
#include<iostream>
using namespace std;

void printarray(int arr[] , int size){
    for(int i = 0; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortZeroOne(int arr[] , int size){

    int left = 0;
    int right = size -1 ;

    while(left < right){

        while(arr[left] == 0 && (left < right)){
            left++;
        }

        while(arr[right] == 1 && (left < right)){
            right--;
        }

        swap(arr[left] , arr[right]);
        left++;
        right--;
    }

}

int main(){
    int arr[12] = {1,0,0,0,1,1,0,1,1,0,0,1};

    // for this 1,0,0,0,1,1,0,1,1,0,0,1 got result 1,0,0,0,1,1,0,1,1,0,0,1
    //and for 1,0,0,0,1,1,0,1,1,0,0,1,2,5,3,6 got result 6 0 0 0 3 5 0 2 0 0 1 1 1 1 1 1 
    int size = 12;

    sortZeroOne(arr , size);
    printarray(arr , size);

}
*/

//2] using sort function



#include<iostream>
 #include <algorithm>
using namespace std;
int main(){
    int arr[] = {1,0,0,0,1,1,0,1,1,0,0,1};
    int size = 12;
    
    sort(arr,arr + size);

    for(int i = 0; i < size ; i++){
        cout<<arr[i]<<" ";
    }

}