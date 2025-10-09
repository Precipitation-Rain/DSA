        //  1
        //  1 2 
        //  1 2 3 
        //  1 2 3 4
        //  1 2 3 4 5


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;

    while(i <= n){
        int j = 1;
        int start = 1;
        while( j <= i){
            cout<<start<<" ";
            start = start + 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }


}