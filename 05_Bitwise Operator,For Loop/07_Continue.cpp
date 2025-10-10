/*
continue is used to skip that particular itertaion 
iteration = konsi bar loop me ghus rahe ho = uthe number ka iteration
continue ke niche ka code unreachable hota hain
*/

#include<iostream>
using namespace std;

int main(){
    for(int i = 1 ; i<= 5 ; i++){
        cout<<"HI"<<endl;
        cout<<"HEY"<<endl;
        continue;

        cout<<"Replay to karde";
    }
}