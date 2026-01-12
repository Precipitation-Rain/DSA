#include<iostream>
using namespace std;

int main()
    {

        int num = 5;
        cout<<num<<endl;


        // address of operator ( & )
        cout<<"Address of num is : "<<&num<<endl;


        // initializing a pointer => always initialize ,  not decleare
        // * => derefrance operator


        int *ptr = &num; // *ptr = decleration of pointer(Pointer ko aise banate hain).
        cout<<"Address of num is : "<<ptr<<endl; // ptr me adrees hain num ka ex 1000
        cout<<" value at Address of num is : "<<*ptr<<endl; // *ptr vo address jaha point karata hain vo value print kargega


        // int *pt = num; => pointer will store only address
        // cout<<*pt;


        // double ka pointer
        double a = 4.3;
        double *ptr2 = &a;
        cout<<"Address of a is : "<<ptr2<<endl; 
        cout<<" value at Address of a is : "<<*ptr2<<endl;

        //size of pointer
        // data type kuch bhi ho pointer will store address so size of each pointer type like int float will be same

        cout<<" size of int pointer is : "<<sizeof(ptr)<<endl;
        cout<<" size of double pointer is : "<<sizeof(ptr2)<<endl;

        






    }