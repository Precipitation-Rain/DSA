#include<iostream>
using namespace std;

int power(int a , int b)
    {

        //base case

        if( b == 0)
            {
                return 1;
            }

        if( b == 1)
            {
                return a;
            }
            

        int ans = power(a , b/2);
        

        if( b % 2 == 0)
            {
                return ans * ans;
            }

        else
            {
                return a * ans * ans;
            }


    }

int main()
    {
        int a , b;

        cout <<"Enter a and b : ";
        cin >> a >> b ;

        int ans = power(a , b);

        cout <<"power of "<<a<<" to "<<b <<" is "<<ans;

        // formula to calculate a to power b is

        // a^b  and b is even then ans = a^b/2 * a^b/2;
        // a^b  and b is odd then ans = a^b/2 * a^b/2 * a;


    }