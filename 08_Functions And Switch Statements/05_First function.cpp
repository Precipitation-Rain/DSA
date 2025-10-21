#include<iostream>
using namespace std;



int power(int a , int b)//Yaha pe tum kuch bhi naam le sakte ho!
{

    int ans = 1;//tum main() ke varaible yaha nahi use kar sakte and vice versa..Kaise kar sakte hain vo aage dekhte hain.
    for(int i = 1; i <= b ; i++){
        ans = ans * a;
    }

    return ans;
}


int main(){


    int a,b;
    cin>>a>>b;
    

    int answer = power(a,b);
    cout<<"Answer is: "<<answer<<endl;
}

