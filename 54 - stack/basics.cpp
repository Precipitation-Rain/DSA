#include <iostream>
#include<stack>
using namespace std;


int main()
{
    stack<int>s;

    s.push(4);
    s.push(5);

    s.pop();

    cout << "Last element in stack : "<< s.top() << endl;
    // s.pop();

    if(s.empty()){
        cout << "Stack is empty";
    }
    else{
        cout << "Stack is not empty";
    }

    cout << endl;
    cout << "Size of stack : " << s.size() << endl;
}
