#include<iostream>
#include<list>
// List :

/*
    It is implemented using the doubly linked list.
    in simple words , list = doubly linked list.
    Direct acces or random acces is not possible
*/
using namespace std;

int main()
    {
        //
        list<int> l;

        l.push_back(45);
        l.push_front(43);

        for(int x : l)
            {
                cout<<x<<" ";
            }

        //erase function has o(n) time complexity

        l.erase(l.begin());

        cout<<endl<<"After Erase : ";
        for(int x : l)
            {
                cout<<x<<" ";
            }

        //
        cout<<"Size of array : "<<l.size()<<endl;

        l.push_front(43);
        l.push_front(46);
        l.push_front(47);
        l.push_back(49);

        for(int x : l)
            {
                cout<<x<<" ";
            }

        //
        cout<<endl<<endl;
        cout<<"First Element : "<<l.front()<<endl;
        cout<<"Last Element : "<<l.back()<<endl;   
        
        //
        cout<<endl<<endl;
        l.pop_back();
        l.pop_back();
        l.pop_front();
        l.pop_front();

        cout<<"After Pop :"<<endl;
        for(int x : l)
            {
                cout<<x<<" ";
            }
       

        

    }