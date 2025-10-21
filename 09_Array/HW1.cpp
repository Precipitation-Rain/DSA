//how to initialize array's all elements with rahathe than 0.

#include <iostream>
#include <algorithm>  // for fill_n

using namespace std;

int main() {
    int arr[5];
    int element;
    cout<<"Enter element: ";
    cin>>element;
    fill_n(arr, 5, element);

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}




//sum of all elements in array;

// #include<iostream>
// using namespace std;

// int sums(int arr[] , int size){

//     int sum = 0;

//     for(int i = 0; i<size; i++){
//         sum = sum + arr[i]; 
//     }

//     return sum;

// }

// int main(){
//     int arr[8] = {10,20,30,40,50,60,70,20};
//     int size = 8;

//     int sum = sums(arr , size);

//     cout<<"Sum is : "<<sum;


// }