#include<iostream>
using namespace std;

int main(){
    int a = 4, b= 6;

    cout << " a & b = " << (a & b) <<endl;
    cout << " a | b = " << (a | b) <<endl;
    cout << " ~a    = " << (~a) <<endl;
    cout << " a ^ b = " << (a ^ b) <<endl;


    // Left and Right shift

    /*
    Left shift:
    (4 << 1):
    4 = 000000....100 
    (4 << 1) = 0000....1000

    Right shift:
    (7 >> 2):
    4 = 000000....111 
    (4 << 1) = 00000000....1



    positive number ke case me padding (left/right shift ke bad jo zeros add hote hain) hamesha 0 hoti hain.
    Negative ke case me padding kya hogi it is dependent on compiler.


    left shift special case (010000000....101)
    Bade number ke case me ,left shift me number -ve ho jayega.
    */

    cout<<(17 >> 1)<<endl;// right shifht me 2 se dive ho jata hain
    cout<<(17 >> 2)<<endl; // jitini bar right shift uti bar 2 se divide ex] (17 >> 4) yaha pr 4 bar right shift hain to 4 bar 2 se divide hoga. 
    cout<<(19 << 1)<<endl; // left shifht me 2 se multiply ho jata hain.
    cout<<(21 << 2)<<endl; // jitini bar left shift uti bar 2 se multiply ex] (17 << 4) yaha pr 4 bar left shift hain to 4 bar 2 se multiply hoga. 

}