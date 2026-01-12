#include<iostream>
using namespace std;

int main()
    {
        int arr[10] = {2 ,45,65,412};

        cout<<arr<<endl;
        cout<< & arr[0] <<endl;

        cout<<endl;

        cout<< *arr<<endl;
        // cout<<  *arr[0] <<endl;
        cout<<  arr[0] <<endl;
        int i = 2;

       
        cout<<"1 st :"<<   (arr + 1)  <<endl;
        cout<<"2 st :"<<   *(arr + 1)  <<endl;
        cout<<"3 st :"<<   (*arr + 1)  <<endl;
        cout<<"4 st :"<<   (*(arr) + 1)  <<endl;

        // mcq me aa sakta hain
        cout<<"5 st :"<<  i[arr]  <<endl;

        cout<<sizeof(*arr)<<endl;
        cout<<sizeof(8.45)<<endl;


 


    }