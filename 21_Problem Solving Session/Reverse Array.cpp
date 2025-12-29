#include<iostream>
using namespace std;
#include<vector>



void print(vector<int>arr)
    {
        for(int i = 0 ; i < arr.size()  ;i++)
            {
                cout<<arr[i]<<" ";
            }
    }


vector<int> reverse(vector<int> arr)
    {
        int size = arr.size();

        int s = 0;
        int e = size - 1;

        while(s <= e)
            {
                swap(arr[s],arr[e]);
                s++;
                e--;
            }

        return arr;
    }


int main()
    {
        vector<int> Arr1;

        Arr1.push_back(54);
        Arr1.push_back(4);
        Arr1.push_back(34);
        Arr1.push_back(40);
        Arr1.push_back(32);
        Arr1.push_back(5);

        cout<<"before rversing : "<<endl;
        print(Arr1);

        vector<int> ans = reverse(Arr1);


        cout<<endl;
        cout<<"After rversing : "<<endl;
        print(ans);



    }