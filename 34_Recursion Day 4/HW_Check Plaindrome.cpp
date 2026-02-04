#include<iostream>
using namespace std;

bool isPlindrome(string input , int left )
    {

        //base case

        if(left > (input.length() - left - 1) )
            return true;


        if(input[left] != input[(input.length() - left - 1)])
            return false;
            
        else
            {
                left++;
            
            }
        

        //recursive call
        return isPlindrome(input , left );


    }


int main()
    {
        string input;
        cout <<"Enter the string to check palindrome : ";
        getline(cin , input);

        if(isPlindrome(input , 0 ))
            {
                cout <<"It is Plaindrome";
            }
        else   
         {
            cout <<"It is not an Plalindrome";
        }

    }