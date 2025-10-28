#include<iostream>
using namespace std;

int sqrt(int n){
    int start = 0;
    int end = n;
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start <= end){

        if(mid * mid == n){
            return mid;
        }

        else if(mid * mid > n){
            end = mid - 1;
        }

        else{
            ans = mid;
            start = mid + 1;
        }

        mid = start + (end - start)/2;

    }

    return ans ;

}


double morePrecision(int number ,int ans , int precision ){

    double factor = 1;
    double tempSol = ans;

    for(int i = 0 ; i < precision;i++){

        factor = factor/10;

        for(double j = tempSol ; j*j < number ; j = j + factor){
            tempSol= j;
        }

    }

    return tempSol;
}


int main(){
    int n;
    cout<<"Enter n: ";
    cin >>n;

    int ans = sqrt(n);
    // cout<<"Sqare root of "<<n<<" is "<< (ans) << endl;

    double d = morePrecision(n, ans , 3);
    cout<<"Sqare root of "<< n <<" is "<< d <<endl;


}