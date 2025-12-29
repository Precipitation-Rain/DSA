#include<iostream>
#include<queue>

// Queue

/*
1.first in first out
2.ticket counter
3.all operations has o(1) complexity
4.random acces is not possible
5.use when first in first out needed
*/

using namespace std;

int main()
    {
        queue<int> q;

        q.push(5);
        q.push(15);
        q.push(55);

        cout<<"Size : "<<q.size()<<endl;

        //
        cout<<"Front element : "<<q.front()<<endl;
        cout<<"Back element : "<<q.back()<<endl;
        
        // pop
        q.pop();
        cout<<endl<<"Size After pop : ";
        cout<<"Size : "<<q.size()<<endl;
        cout<<"Front element : "<<q.front()<<endl;

        //
        cout<<"Empty or not : "<<q.empty()<<endl;





    }