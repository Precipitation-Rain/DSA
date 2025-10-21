#include<iostream>
using namespace std;

void printarray(char ch[] , int size){

    for(int i = 0 ; i < size ; i++){
        cout<<ch[i]<<" "<<endl;
    }

}

int main(){
    char ch[5];
    //cout<<ch[2]<<endl;

    char chFirst[4] = {'a','b','c','d'};
    int n = 4;
    //cout<<chFirst[1]<<endl;
     printarray(chFirst , n);

     cout<<endl<<endl;
     

    char chSecond[5]={'a'};
    n = 5;
    printarray(chSecond , n);
    //cout<<chSecond[3]<<endl;

   
    

    cout<<"Everything is fine"<<endl;

    bool b[1234];
    float abcd[2345];
    double dble[9876];


}