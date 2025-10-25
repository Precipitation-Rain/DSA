#include<iostream>
using namespace std;

void sort012(int arr[] , int size){
    int i = 0;
    int j = i + 1;

    for(int i =0 ; i < size ; i++){
      

        for(int j = i + 1; j< size ; j++){

            while(i==0){
                i++;
            }

            while(j!=0){
                j++;
            }

            if((i==2 && j==0) || (i==1 && j==0)){
            swap(arr[i],arr[j]);
            i++;
            j++;   
            }


        }
    }

//     while((j < size)){
//         while(i==0){
//             i++;
//         }

//         while(j!=0){
//             j++;
//         }

//         if((i==2 && j==0) || (i==1 && j==0)){
//             swap(arr[i],arr[j]);
//             i++;
//             j++;

            
//         }
//     }
}
void printarray(int arr[] , int size){
    for(int i = 0; i< size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){


int arr[9]={0,1,2,2,1,0,0,1,2};
int size = 9;
printarray(arr,size);
sort012(arr , size);
cout<<endl;
printarray(arr,size);

}