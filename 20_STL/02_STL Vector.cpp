#include<iostream>
#include<vector>

// Vector
/*
1.Dynamic array(it can increses its size).
2.you can randomly access any element like array
3.How it is dynamic :
ex] its size = 5
 you entered 5 element.Now it will create new vector which is double size of previous vector.it copy all elements of previous vector into new vector.
*/

using namespace std;
int main(){

    vector<int> v;

    cout<<"Capacity of Vector : "<<v.capacity()<<endl; // check how many elements memory allocated to vector

    v.push_back(8);
    cout<<"Capacity of Vector : "<<v.capacity()<<endl;

    v.push_back(7);
    cout<<"Capacity of Vector : "<<v.capacity()<<endl;

    v.push_back(6);
    cout<<"Capacity of Vector : "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capacity of Vector : "<<v.capacity()<<endl;

    v.push_back(4); // inserting element at last of array
    cout<<"Capacity of Vector : "<<v.capacity()<<endl;

    cout<<"Size of vector : "<<v.size()<<endl; // how many elements are present in array.

    for(int i = 0 ; i < v.size() ;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<endl<<endl;

    cout<<"Element at index 2 : "<<v.at(2)<<endl; //accesing elements st index 2

    cout<<"First elemnt : "<<v.front()<<endl; // gives first element

    cout<<"Last elemnt : "<<v.back()<<endl; // gives last element
    cout<<endl<<endl;

    cout<<"Before POP : "<<endl;
    for(int i = 0 ; i < v.size() ;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;  

    v.pop_back();

    cout<<"After POP : "<<endl;
    for(int i = 0 ; i < v.size() ;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;  

    cout<<endl<<endl;
    v.clear(); // removes all elemnent but keep the capacity

    cout<<"Capacity of Vector : "<<v.capacity()<<endl;

    cout<<"Size of vector : "<<v.size()<<endl;

    // iterators:

   v.begin(); // gives first iterator

   v.end(); // gives last iterator

   // vector initialization:
   cout<<endl<<endl;

   vector<int> a(5); // intialize vector with all 5 elemets = 1;
   cout<<"Printing A : "<<endl;
   for(int x : a){
    cout<<x<<" ";
   }


   cout<<endl<<endl;
   vector<int> last(a);

   cout<<"Printing last : "<<endl;
   for(int x : last){
    cout<<x<<" ";
   }


    











}
