#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;

     float ans = 0;
     int i = 0;

    while(n != 0){
        int bit = n & 1;
       
         ans = (bit * pow(10,i)) + ans;
         
         n = n >> 1;
         i++;
    }

    cout<<"ans "<<ans;

    
    /* why ae are getting wrong results for int but correct for float
    
    ---> 
    pow(10, i) always returns a floating-point value (double).
    So bit * pow(10, i) is a floating point expression.
    If ans is an int, you're assigning a float to an int → it may truncate or round, leading to incorrect results especially for larger numbers.
    
    */
}