#include<iostream>
using namespace std;

// function ko hamesha main() ke upar hi likhna.
int power(){
    int n;
    cin>>n;
    int sum = 0;

    for(int i = 1; i<=n ; i++){
        sum = sum + i;
    }

    
    return sum;
}




int main(){

    int sum = power();
    cout<<"Sum is: "<<sum;
}



