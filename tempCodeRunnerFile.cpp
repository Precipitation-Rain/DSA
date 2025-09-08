#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;

    int i=1;

    while(i<=n){
        int j=1;
        int s=1;
        while(j<=n){
            cout<<s<<" ";
            j=j+1;
            s=s+1;

        }
        cout<<endl;
       s=s+1;
        i=i+1;
    }
}