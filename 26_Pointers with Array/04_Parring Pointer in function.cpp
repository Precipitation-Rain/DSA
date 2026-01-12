#include<iostream>
using namespace std;

void print(int *p)
    {
        cout << "Address " << p << endl;
         cout << "Value " << *p << endl;
    }

void addressupdate(int * ptr)
    {
        ptr = ptr + 1;
    }

void valueupdate(int * ptr)
    {
        *ptr = *ptr + 1;
    }

int getSum(int arr[] , int n)
        {
             // int arr[] = int *arr
            int sum = 0;
            cout << "size : "<< sizeof(arr) << endl;

            for(int i = 0 ; i < n ;i++)
                {
                    sum = sum + arr[i];
                }

            return sum;

        }

  
int main()
    {
       

        // pasigng varaible in function
        int temp = 5;
        int * ptr = &temp;
        print(ptr);
        cout<<endl;

        // updating address
        cout<<"Before : "<< ptr << endl;
        addressupdate(ptr);
        cout<<"After : "<< ptr << endl;
        cout<<endl;
        // updating value
        cout<<"Before : "<< *ptr << endl;
        valueupdate(ptr);
        cout<<"After : "<< *ptr << endl;
        cout<<endl;

        // passing array in function
         int arr[6] = {11,2,3,4,5,8};
         int sum = getSum(arr + 3 , 3);
         cout << "sum : "<< sum << endl;
         cout<<endl;

    }