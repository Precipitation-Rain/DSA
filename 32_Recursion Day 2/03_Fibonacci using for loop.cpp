#include<iostream>
using namespace std;

int main()
    {
        int zeroth_term = 0;
        int first_term = 1;

        int n ;
        cout << "Enter term you want : ";
        cin>> n;

        int secondLast = zeroth_term;
        int last = first_term;

        int count = 1;
        int next;

        while(count <= n)
            {
                next = secondLast + last;
                last = secondLast;
                secondLast = next;
                count++;
            }

        cout << n <<" th term is : "<< next;
    }