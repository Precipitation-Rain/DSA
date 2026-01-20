// call by referance and call  by value

#include<iostream>
using namespace std;

//call  by value
void update1(int n)
    {
        n++;
    }
    

// call by referance
void update2(int &n)
    {
        n++;
    }

int main()
    {
        int n = 5;
        cout << "Before : "<< n << endl;
        update1(n);
        cout << " After : " << n << endl;

        cout << "Before : "<< n << endl;
        update2(n);
        cout << " After : " << n << endl;



    }