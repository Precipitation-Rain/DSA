#include<iostream>
#include<set>
// set :

/*
1.Stores unique elements.
2.return elements is reversed order
3.it is slow
4.unordered set is fast in execution, but it does not return element sin sorted order.
5.set is implememnted using BST

6.insert,count,erase,find has complexity o(log n) , remaining all function has complexity o(1).


*/
using namespace std;

int main()
    {
        //
        set<int> s;

        s.insert(3);
        s.insert(4);
        s.insert(5);s.insert(5);s.insert(5);s.insert(5);s.insert(5);
        s.insert(6);s.insert(6);s.insert(6);
        s.insert(7);

        for(int x : s)
            {
                cout<<x<<" ";
            }

        cout<<endl;
        cout<<"Size of Set : "<<s.size()<<endl;

        //
        cout<<"Before Erase : "<<endl;
        for(int x : s)
            {
                cout<<x<<" ";
            }


        s.erase(s.begin());
            cout<<endl;

        cout<<"After Erase : "<<endl;
        for(int x : s)
            {
                cout<<x<<" ";
            }

            //
        cout<<endl;
        cout<<"Count of element : "<<s.count(5)<<endl;

        cout<<endl;
        cout<<"Count of element : "<<s.count(-5)<<endl;


        //
        auto itr = s.find(6);

        for(auto it = itr ; it != s.end() ;it++){
            cout<<*it<<" ";
        }
        // you can do erase operation using the iterator also

        cout<<endl;

        cout<<"Empty or not : "<<s.empty()<<endl;
  






    }