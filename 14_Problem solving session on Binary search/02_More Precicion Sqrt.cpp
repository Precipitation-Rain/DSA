#include<iostream>
using namespace std;

int mySqrt(int x) {

    long long int s = 0;
    long long int e = x;
    long long int mid = s + (e - s)/2;
    long long int ans = -1;
    while(s <= e){
        
        long long int sqare = mid * mid;

        if(sqare == x){
            return mid;
        }

        else if (sqare < x){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

        mid = s + (e - s)/2;
    }
    return ans;
        
    }


double moreprecision(int n , int precision , int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i = 0 ; i < precision ; i++){
        factor = factor / 10;
        for(double j = ans ; j * j < n ; j+=factor){
            ans = j;
        }
    }

    return ans;
}


int main(){
    int n;
    cout<<"Enter n: ";
    cin >>n;

    int ans = mySqrt(n);
    // cout<<"Sqare root of "<<n<<" is "<< (ans) << endl;

    double d = moreprecision(n,3,ans);
    cout<<"Sqare root of "<< n <<" is "<< d <<endl;


}