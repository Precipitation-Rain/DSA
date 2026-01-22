// The const keyword in C++ is used to indicate that a variable, pointer, argument, or member function is constant,
//  meaning its value or behavior cannot be changed after initialization.

//constant varaible
/*
#include <iostream>
using namespace std;
int main() {
   const int x = 5; // Declaring x as a constant
    x = 10; // Error: Attempting to modify a const variable
   cout << "Value of x: " << x << endl;
   return 0;
}
*/

// constant pointer
/*
#include <iostream>
using namespace std;
int main() {
   int y = 10;
   int k = 4;
   const int *ptr = &y; // Pointer to a constant integer

   // const pointer does not allow changing the value which is pointed by himself , but can be chnaged to  point to different location.
   //value can't be changed but memory location pointing can be changed.
    //*ptr = 20;
    ptr = &k;
    // *ptr = 100;
   cout << "Value pointed by ptr: " << *ptr << endl;
   return 0;
}
*/


//constant argument

#include <iostream>
using namespace std;
void printValue(const int value) { // Using const in function parameter

    //value = 20; // Error: Attempting to modify a constant parameter => now allowed
    
   cout << "Value: " << value*4 << endl;
}
int main() {
   int num = 15;
   printValue(num);
   return 0;
}

