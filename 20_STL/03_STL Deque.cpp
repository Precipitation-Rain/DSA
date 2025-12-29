#include<iostream>
#include<deque>

// Deque
/*
1.also known as deq , double ended queue
2.you can do push and pop operations from both end.
*/

using namespace std;

int main(){

    deque<int> d;

    d.push_back(5);
    d.push_front(4);

    for(int i : d){
        cout<<i<<" ";
    }

    cout<<endl<<endl;

    cout<<"Is it is Empty : "<<d.empty()<<endl;

    cout<<"Size of d : "<<d.size()<<endl;

    cout<<d.at(0)<<endl;

      cout<<endl<<endl;

      // front and back element

    cout<<"Before Pop"<<endl;
    for(int i : d){
        cout<<i<<" ";
    }

    d.pop_back();

    cout<<endl<<endl;
    cout<<"After pop"<<endl;
    for(int i : d){
        cout<<i<<" ";
    }

    cout<<endl;

  d.push_back(5);
      for(int i : d){
        cout<<i<<" ";
    }

    // front and back element

cout<<endl<<endl;

    cout<<"First Element : "<<d.front()<<endl;
    cout<<"Last Element : "<<d.back()<<endl;


    cout<<endl<<endl;
    // erase removes based on range
    // after erase , the size of deq become zero but max size(allocated memory at starting) remains same

    cout<<"Before Erase"<<endl;
    for(int i : d){
        cout<<i<<" ";
    }

    d.erase(d.begin(),d.begin()+1);

    cout<<endl<<endl;
    cout<<"After Erase"<<endl;
    for(int i : d){
        cout<<i<<" ";
    }

    cout<<endl;

    // after erase the size become zero but max size(memory allocated at time of declaration is same)


}