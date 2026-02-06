// #include<iostream>
// using namespace std;

// void reverse(string &str , int start )
//     {
        
//         int end = str.length() - start - 1;
//         //base case

//         if(start > (end))
//             return;

        
//         swap(str[start],str[end]);
//         start++;

//        return reverse(str ,  start);

//     }

// int main()
// {
//     string input ;
//     cout<<"Enter the string : ";
//     getline(cin , input);

//     reverse(input , 0 );
//     cout <<"Reversed string is : "<<input;


// }
#include<iostream>
using namespace std;

void reverse(string &str , int start )
    {
        
        //base case
        if( (start) > (str.length() - start - 1))
            return;

        
        swap(str[start],str[str.length() - start - 1]);
        start++;

        reverse(str ,  start);

    }

int main()
{
    string input ;
    cout<<"Enter the string : ";
    getline(cin , input);

    reverse(input , 0 );
    cout <<"Reversed string is : "<<input;


}