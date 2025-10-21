#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size,int key){

    for(int i = 0 ; i < size ; i++){

    if(key == arr[i]){
        return 1;
    }

}

return 0;
}


int main(){
    int arr[100];

    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    cout<<endl;
    cout<<"Enter array elements: "<<endl;
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }

    cout<<endl;

    int key;
    cout<<"Enter key you want to find: ";
    cin>>key;

    bool found = linearSearch(arr,size,key);

    if(found){
        cout<<"Element is present in array";
    }

    else{
        cout<<"Element is not present in array";
    }



}