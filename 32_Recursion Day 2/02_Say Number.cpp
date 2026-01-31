#include<iostream>
using namespace std;

void sayDigit(int n , string arr[])
    {
        //base case
        if(n == 0)
            return;

        //processign
        int digit = n % 10;
        n = n / 10;

        //recursive call
        sayDigit(n,arr);

        cout << arr[digit] << " ";

    }

int main()
    {
        int n ;
        cout <<"Enter n : ";
        cin >> n;

        string arr[] = {"Zero","One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine"};


        sayDigit(n,arr);
    }