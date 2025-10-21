#include<iostream>
using namespace std;

int factorial(int n){
    int product = 1;

    for(int i = 1; i<=n ; i++){
        product = product * i;
    }

    return product;
}

int nCr(int number,int r){

    int num = factorial(number);

    int den = (factorial(r) * factorial(number - r));

    int ans = num/den;

    return ans;

}

int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter r: ";
    cin>>r;

    int ans = nCr(n,r);

    cout<<"Answer is: "<<ans<<endl;


}