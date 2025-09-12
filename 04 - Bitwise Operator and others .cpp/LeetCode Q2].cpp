#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cout << "Enter value of n in binary: ";
    cin >> binary;

    int count = 0;
    for (char c : binary)//it means take each character from binary and store in varaible c
     {
        if (c == '1') {
        count++;
         }
    }

    cout << "Number of 1's = " << count;
    return 0;
}

// counting no of ones in any number.