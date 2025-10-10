/*

INCREMENT:

i = i + 1; can written in following ways

1] i++ // post increment// pehle use karlo bad me badha den
2]++i //pre increment //pehle badhao fir use karlo
3] i += 1 //for utility

DECREMENT:
i = i - 1; can written in following ways
1]i-- // Post decrement //pehele use karlo fir kam kar dena
2]--i //pre decrement // pehle kam kardo fir use karna
3]i-=1 //utility

*/
#include<iostream>
using namespace std;

int main(){

int i = 7;

cout << (i++) <<endl; //7,i=8

cout << (++i) << endl; //i = 9

cout << (--i) << endl; //8

cout << (i--) << endl;//8 , i = 7

cout<< i << endl;
}

// 1
//0,3,inside
//inside 0,2 // or me pehli true hain to dusri check nahi hoti
//100
//1,3


