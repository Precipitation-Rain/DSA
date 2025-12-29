#include<iostream>
using namespace std;

char getMaxOuccringCharacter(string s)
    {

        int arr[26] = {0};

        //finding occurences;
        for(int i = 0 ; i < s.length() ;i++)
            {
                char ch = s[i];
                int count = ch - 'a';
                arr[count]++;
            }

        //finding count

        int maxi = -1;
        int ans = -1;

        for(int i = 0 ; i < 26 ; i++)
            {
                if(arr[i] > maxi)
                    {
                        maxi = arr[i];
                        ans = i;
                    }
            }

        char character = ans + 'a';
        return character;

        


    }

int main()
    {
        string s;
        cout<<"Enter String : ";
        cin>>s;

        cout<<"Max ouccering character is : "<<getMaxOuccringCharacter(s)<<endl;


    }
