#include<iostream>
#include<queue>

// priority_queue

/*
work as max and min heap.
1.max heap return elements in max order.
2.min heap return element in min order.
3.random acces /acces of element is not possible
4.use when elemnts are needed in increasing / decresaing order
*/
using namespace std;

int main()
    {
        priority_queue<int> p;
        // by default it is max heap.
        p.push(13);
        p.push(23);
        p.push(33);
        p.push(43);
        p.push(53);


        cout<<"Top element(maximum element) : "<<p.top()<<endl;

        int n = p.size();

        cout<<"Size of the p : "<<n<<endl;


        for(int i = 0 ; i < n ;i++){
            cout<<p.top()<<" ";
            p.pop();
        }

        cout<<endl<<endl;    
        cout<<"Size of the p after pop  : "<<p.size()<<endl;
        

        //
        cout<<endl<<endl;  

        priority_queue<int,vector<int>,greater<int> > mini; // min heap
        mini.push(13);
        mini.push(23);
        mini.push(33);
        mini.push(43);
        mini.push(53);

       cout<<endl<<endl;

        cout<<"Top element(minimum element) : "<<mini.top()<<endl;
        int n1 = mini.size();

        cout<<"Size of the p : "<<n1<<endl;
        for(int i = 0 ; i < n1 ;i++){
            cout<<mini.top()<<" ";
            mini.pop();
        }

        cout<<endl;
        cout<<"Size of the p after pop  : "<<mini.size()<<endl;

        cout<<"Empty or not : "<<mini.empty()<<endl;




    }