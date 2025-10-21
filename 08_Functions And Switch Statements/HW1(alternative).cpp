#include<iostream>
using namespace std;


  int  apnthterm(int n1, int n2 ){

    int first = (3*n1 + 7);

    int second = (3*n2 + 7);

    int d = second - first;

    int n;
    cout<<"Enter nth term do you want: ";
    cin>>n;

    int nth_term = (first + (n - 1)*d);

    return nth_term;


    }

int main(){

    int a;
    cout<<"Enter a: ";
    cin>>a;

    int b;
    cout<<"Enter b: ";
    cin>>b;
    
    

    int ans = apnthterm(a,b);

    cout<<"N th term in ap is: "<<ans;
}