#include<iostream>
using namespace std;

int main(){
    // varaibles :
    /* used to store data in merory
    naming convention:-)
    1.You can use aplhabates and number
    2.You can use special character _
    3.you can't start varaible name by digit
    
    ex] abhay -> allowed
    _ab -> allowed
    a_b -> allowed
    ab1 -> alllowed
    1_abi -> not allowed*/

    // DataTypes:
    // 1.Tells which type of data is going to store in memory.
    // 2.size of data 

    //Takes 4 byte
    int a = 24;
    cout << a << endl;

    //Takes 1 byte
    char ch = 'a';
    cout << ch << endl;

    //Takes 1 bit
    bool bl = true;
    cout << bl << endl;

    //Takes 4 bytes
    float f = 1.23;
    cout << f << endl;

    // Takes 8 bytes
    double b = 1.2;
    cout << b << endl;

    //sizeof() is used to print size of that varaible

    int size = sizeof(f);
    cout << size << endl;
}