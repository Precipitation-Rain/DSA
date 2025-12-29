#include<iostream>
#include<array>
using namespace std;

int main(){
    int normal_array[5] = {1,2,3,4,5}; // normal array

    array<int , 5> arr = {3,4,5,6,7}; // stl array => implementation is based on the normal array. 
    // drawback  : it is static.



    cout<<"Size of array : "<<arr.size()<<endl;     // calculating size

    cout<<"Is empty or not : "<<arr.empty()<<endl; // checking is empty or not

    cout<<" accesing element by using at method "<<arr.at(2)<<endl; // accesing element at index 2

    cout<<"First element : "<<arr.front()<<endl; // printing first element

    cout<<"Last element : "<<arr.back() << endl ; // printing last element

    for(int i = 0 ; i < arr.size() ;i++){
        cout<< arr[i] << " ";
    }

    
}
