#include<iostream>
#include<stack>

// stack

/*
1. Last in first out
2.Shadi ki plates
3.random acces is not posssible
4.use when LIFO is needed.
*/
using namespace std;

int main()
    {
        stack<string> s;

        s.push("Raj");
        s.push("Vardhan");
        s.push("Shambhu");
        s.push("Shewale");


        //
        cout<<"Top element : "<<s.top()<<endl;
        cout<<"Size of array : "<<s.size()<<endl;
        cout<<"Empty or not : "<<s.empty()<<endl;
        

        //pop
        cout<<endl;
        s.pop();
        cout<<"Top element : "<<s.top()<<endl;
        cout<<"Size of array : "<<s.size()<<endl;




    }