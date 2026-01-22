#include<iostream>
using namespace std;

int i = 5; //=> global varaible => kabhi bhi use mat karna => bad practice
// the varible which is decleared in any { } known as local varible , applies on main() also.

void a(int &i)
    {
        cout << " i in a : "<< i << endl;
        i++;
    }
void b(int &i )
    {
        cout << " i in b : "<< i << endl;
        i--;
    }
int main()
    {
        int i = 5;
        cout << " i in main : "<< i << endl;
        a(i);
        b(i);
        cout << " i in main : "<< i << endl;

    }