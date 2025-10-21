#include<iostream>
using namespace std;

int main(){
    ///Declearation

    int dost[4];

    //accesing the array

    cout<<dost[8]<<endl;

    //uske bahar ka print karoge to random garbage value aa jayegi
    cout<<dost[25]<<endl;

    cout<<"Everything is fine!"<<endl;

    //initialisation

    int dostii[5]={6,46,89,43,13};

    cout<<dostii[2]<<endl;

    //if you don't initialise the array and try to acces out of bount index elemnt then it gives random number
    //if you initialise the array and try to acces out of bount index elemnt then it gives 0

    int naam[50]={6,46,89,43,13};

    cout<<naam[20]<<endl;

    //printing an array:

     int num[20]={1,2,3,4,5};
       int  n = 20 ;
   

    for(int i = 0 ; i < n ; i++){
        cout<<num[i]<<" "; 
    }


    // INITIALIZING all elemnets with zero

    cout<<endl<<endl;
    int fourth[10]={0};
    n = 10;

    for(int i = 0; i < n ; i++){
        cout<<fourth[i];
    }

    //initializing with 1(nahi hoga):

     cout<<endl<<endl;
    int fifth[10]={1};
    n = 10;

    for(int i = 0; i < n ; i++){
        cout<<fifth[i];
    }
}