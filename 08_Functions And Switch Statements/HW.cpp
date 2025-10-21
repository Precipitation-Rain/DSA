#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    while (true) {
        cout << "Enter 1 to continue, 0 to exit: ";
        cin >> n;
        switch (n) {
            case 1:
                cout << "Running...\n";
                continue;
            case 0:
                cout << "Exiting...\n";
                exit(0);
            default:
                cout << "Invalid input\n";
        }
    }
}
