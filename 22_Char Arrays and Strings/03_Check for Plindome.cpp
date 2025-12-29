#include<iostream>
using namespace std;


char toLowercase(char ch)
    {
     
        if(ch >= 'a' && ch <= 'z')
            {
                return ch;
            }

        else
            {
                char temp = ch - 'A' + 'a';
                return temp;
                
            }    
        
    }

int getLength(char name[])
    {
        int count = 0;
        for(int i = 0 ; name[i] != '\0' ;i++)
            {
                count++;
            }

        return count;
    }

bool isPalindrome(char name[] , int len)
    {
        int s = 0;
        int e = len - 1;

        while(s < e)
            {
                if(toLowercase(name[s]) == toLowercase(name[e]))
                    {
                        s++;
                        e--;
                    }

                else{
                    return 0;
                }
            }

        return 1;
    }

int main()
    {
        char name[20];

        cout<<"Enter name : ";
        cin>>name;

        int len = getLength(name);

        bool yes = isPalindrome(name , len);

        cout<<"The "<<name<<"Is palindrome or not : "<<yes<<endl;


    }