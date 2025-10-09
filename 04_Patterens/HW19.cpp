#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i <= n){

        // space print karlo

        int space = n - i;
        while(space){
            cout<<" ";
            space = space - 1;
        }

        // 1 st traingle
        int j = 1;
        while(j <= i){
            cout<<j;
            j = j + 1;
        }

        //2 nd traingle

        int start = i - 1;
        while(start){
            cout<<start;
            start = start - 1;
        }

        cout<<endl;
        i = i + 1;










    }
}