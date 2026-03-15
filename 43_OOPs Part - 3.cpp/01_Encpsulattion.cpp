//Binding all datamembers and functions into one unit(class)

#include<iostream>
using namespace std;

class Animal{

    public:
    //data memebers(properties)
    int age;
    string name;

    //behaviours(functions)
    void print()
        {
            cout <<"Hello world : "<<endl;
        }


};



int main()
    {

        Animal a;
        a.print();

    }