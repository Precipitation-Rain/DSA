#include<iostream>
using namespace std;



int getLength(char name[])
    {
        int count = 0;
        for(int i = 0 ; name[i] != '\0' ;i++)
            {
                count++;
            }

        return count;
    }

void reverse(char name[] , int len)
    {
        int s= 0;
        int e = len - 1;

        while(s < e)
            {
                swap(name[s++] , name[e--]);
            }
    }

int main()
    {
        char name[20];

        cout<<"Enter name : ";
        cin>>name;

       int len =  getLength(name);

       cout<<"Length of string = "<<len<<endl;

       cout<<"Before reverse : "<<name<<endl;
       reverse(name , len);
       cout<<"After Reverse : "<<name<<endl;

    }