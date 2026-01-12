#include<iostream>
using namespace std;

int main()
    {
        // all points may com ein mcq test
        // jitn ajyada practice utna jyada samjh aayega

        //1 st point
        int arr[5] = {1,2,3,4,5};
        char ch[6] = "vardh";

        cout << arr << endl;
        cout << ch << endl;

        // 2 nd point

         char *chrs = &ch[0];
        cout << chrs << endl;
        cout << &ch[0] << endl;
        cout << &ch << endl;

        char *chr = &ch[2];
        cout << chr << endl;


        // third point

        char temp = 'z';
        char *ptr = &temp;

        cout << ptr << endl;
        cout << &temp << endl;

        // fourth point => kabhi bhi mat karna

        // char *kam = "temp";




    }