#include<iostream>
using namespace std;

inline int getMax(int a , int b)
    {
        return (a > b) ? a : b;
    }

// funation call get replaced by body of the inline function
// works on only 1 line ke code wale function pe

// redability increases and no memory uses

int main()
    {
        int ans = 0;
        int a = 5, b = 6;

        // if( a > b)
        //     {
        //         ans = a;
        //     }
        // else  {
        //     ans = b;

        // }

        //ternary ooperator

        ans = getMax(a , b);
        cout << ans << endl;

        a = a + 3;
        b = b + 2;

        ans = getMax(a , b);
        cout << ans << endl;

    }