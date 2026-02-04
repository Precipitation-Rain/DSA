#include<iostream>
using namespace std;

int mySqrt(int number , int start , int end,int ans) {

    
    long long int mid = start + (end - start)/2;

    //base case
    if(number == 0)
        {
            return 0;
        }

    if(number == 1)
        {
            return 1;
        }

     if(start == end)
        return ans;


    long long int sqare = mid * mid;
        

        if(sqare == number){
            return mid;
        }

        else if (sqare < number){
                ans = mid;
                return mySqrt(number , mid + 1 , end , ans);
        }

        else
            {
                return mySqrt(number , start , mid - 1 , ans);
            }


        
    }


int main(){
    int number;
    cout<<"Enter n: ";
    cin >>number;

    int ans = -1; 
    long long int start = 0;
    long long int end = number;



    int answer = mySqrt(number,start,end,ans);
    cout<<"Sqare root of "<<number<<" is "<< (answer) << endl;

    // // double d = moreprecision(n,3,ans);
    // cout<<"Sqare root of "<< n <<" is "<< ans <<endl;


}