#include<iostream>
using namespace std;

int main(){
    int amount ;
    cout<<"Enter amount: ";
    cin>>amount;

    switch (true){

        case 1: 

        int Hundred_notes = ( amount / 100 ) ;
        cout<<"100 ke notes: "<<Hundred_notes<<endl;

                int remaining;
                remaining = (amount % 100);
            // cout<<remaining<<endl;
        int Fifty_notes = (remaining / 50);
        cout<<"50 ke notes: "<<Fifty_notes<<endl;

                remaining = (( (amount - (Hundred_notes*100))) % 50 );
                // remaining = (amount % 50);
            // cout<<remaining<<endl;

        int Twenty_notes = (remaining / 20);
        cout<<"20 ke notes: "<<Twenty_notes<<endl;
                remaining = (((amount - (Hundred_notes*100)-(Fifty_notes*50))) % 20 );
                // remaining = (amount % 20);
            // cout<<remaining<<endl;

         int One_notes = (remaining / 1);
        cout<<"1 ke notes: "<<One_notes<<endl;

        //  break;

        

         
    }
  

}