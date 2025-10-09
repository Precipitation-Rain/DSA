#include<iostream>
using namespace std; 

int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i <= n){
        //1 st traingle
        int j = 1;
        while(j <= (n - i + 1)){
            cout<<j;
            j = j + 1;
        }

        //stars
        int star1 = i - 1; 
        while (star1){
            cout<<"*";
            star1 = star1 - 1;
        }

         // stars 2
         int star2 = (i - 1);
         while(star2){
            cout<<"*";
            star2 = star2 - 1;
         }
       

        //3 rd traingle
        int value = (n - i + 1);
        while(value){
            cout<<value;
            value = value - 1;
            
        }


        
        cout<<endl;
        i = i + 1;
    }
}