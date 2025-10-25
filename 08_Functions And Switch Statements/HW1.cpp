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

// what if we write continue in switch case insted of break;

/* key note:
❌ Not allowed directly inside a switch unless that switch is inside a loop.
Otherwise you’ll get an error:

error: continue statement not within a loop
*/

// Situation	                                                                      What continue does
// Inside for loop	                                              Skips remaining body, goes to next iteration (i++ part still runs)
// Inside while loop	                                                        Skips remaining body, jumps to condition check
// Inside do-while loop	                                              Skips rest of body, goes to condition check
// Inside switch (not in loop)	                                                      ❌ Error
// Inside switch inside loop	                                            Skips rest of loop, next iteration starts