#include<iostream>
using namespace std;

void reverse(string &str , int start , int end)
    {

        //base case

        if(start > end)
            return;

        
        swap(str[start],str[end]);
        start++;
        end--;

       return reverse(str ,  start ,  end);

    }

int main()
{
    string input ;
    cout<<"Enter the string : ";
    getline(cin , input);

    reverse(input , 0 , input.length() - 1);
    cout <<"Reversed string is : "<<input;


}