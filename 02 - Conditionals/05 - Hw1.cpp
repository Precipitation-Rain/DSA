#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = a + 1;

    if ((a = 3) == b) {   // NOTE: this is assignment (=), not comparison (==)
        cout << a;
    }
    else {
        cout << a + 1;
    }

    return 0;
}
