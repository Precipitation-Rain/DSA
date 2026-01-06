#include<iostream>
using namespace std;

bool isPrime(int n)
    {

        // edge case
        if ( n <= 1)
            {
                return false;
            }

        for(int i = 2 ; i < n ;i++)
            {
                if(n % i == 0)
                    {
                        return false;
                    }
            }
        return 1;
    }

int main()
    {
        int number;
        cout<<"Enter a number : ";
        cin>>number;

        if(isPrime(number))
            {
                cout<<"It is a Prime Number";
            }

        else
            {
                cout<<"It is not a Prime Number";
            }
    }