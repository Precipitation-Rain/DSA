 #include<iostream>
 using namespace std;

 int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

        bool isPrime = 1;
    for(int i = 2; i < n ; i++){
        if(n%i == 0){
            // cout<<"Prime";
            isPrime = 0;
            break;
        }
        else{
            //may be prime;
        }
    }

    if(isPrime == 0){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }
 }