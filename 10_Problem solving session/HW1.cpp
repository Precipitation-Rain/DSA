//unique occurances

/*
1.unique elements
2.without size and without elemnts knowing
*/
#include<iostream>
using namespace std;

// void printarray(int arr[] , int size){
//     for(int i = 0 ; i<size ; i++){
//         cout<<arr[i]<<" ";
//     }
// }

    bool isUnique(int arr[] , int size){
        int count = 0;
        int count1= 0;
        int count2 = 0;

           

        if((count == count1) || (count1 == count2) || (count2 == count)){

            return 0;

        }
        else{
            return 1;
        }
    }
    

int main(){
    int arr[7] = {13,24,53,24,53,53,24};
    int size = 7;

    // printarray(arr , size);
    bool bl = isUnique(arr , size);

    if(bl==0){
        cout<<"No unique Occurance";
    }

    else{
        cout<<"unique Occurance";
    }

}