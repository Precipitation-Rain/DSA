#include<iostream>
using namespace std;

    int fibonacci(int num){

        int a = 0;
        int b = 1;

        // cout<<a<<" ";
        // cout<<b<<" ";

        for(int i = 3; i <=num ; i++){

        
            int next = a + b;
            // cout<<next<<" "<<endl;

            a = b;
            b = next;

             if( i == num){
                cout<<num<<"th term in fibonacci is: "<<next;
            }

        }

    }

int main(){
    int n ;
    cout<<"Enter which no of term do you want in fibonacii: ";
    cin>>n;

    

    fibonacci(n);
}