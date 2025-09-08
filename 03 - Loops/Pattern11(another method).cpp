#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int col = 1;

    while(col<=n){
        int i=1;
        char ch = 'A' + col -1;
        while(i<=n){
            cout<<ch<<" ";
            i=i+1;
        }
        cout<<endl;
        col=col+1;
    }
}