#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
   int count = 1; 
    while(i<=n){
        int j = 1;
        //  int count = 1; ye firse count = 1 bana dega and fir  1 2 3 same print karega;
        while(j <= n){
            cout<<count<<" ";
            count = count + 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}