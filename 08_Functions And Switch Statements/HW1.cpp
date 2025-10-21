#include<iostream>
using namespace std;


  int  apnthterm(int n){

    int ans = (3*n + 7);

    return ans;


    }

int main(){
    
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int ans = apnthterm(n);

    cout<<"N th term in ap is: "<<ans;
}