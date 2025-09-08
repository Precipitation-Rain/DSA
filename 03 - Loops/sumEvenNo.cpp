#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;
    int sum=0;

    while(i<=n){
        sum=sum+i;
        i=i+2;
    }

    cout<<"Sum of all even no's is:"<<sum;
}