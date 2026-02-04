#include<iostream>
using namespace std;

bool isPlindrome(string input , int left , int right)
    {

        //base case

        if(left > right)
            return true;


        if(input[left] != input[right])
            return false;
            
        else
            {
                left++;
                right--;
            }
        

        //recursive call
        return isPlindrome(input , left , right);


    }


int main()
    {
        string input;
        cout <<"Enter the string to check palindrome : ";
        getline(cin , input);

        if(isPlindrome(input , 0 , input.length() - 1))
            {
                cout <<"It is Plaindrome";
            }
        else   
         {
            cout <<"It is not an Plalindrome";
        }

    }