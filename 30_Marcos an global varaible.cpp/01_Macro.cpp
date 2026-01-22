#include<iostream>
using namespace std;

#define pi 3.14 // this is macro 
// reduces memory and no worry of getting updated inside code

int main()
    {
        int r = 5;
        double area = pi * r * r;
        cout << "Area is : "<< area <<endl;
        
    }



// object like macro


/*
#include <stdio.h>

// Macro definition
#define DATE 31

int main(){
  
    // Print the message
    printf("Lockdown will be extended"
           " upto %d-MAY-2020",
           DATE);
    return 0;
}
*/



//chain macros
/*
#include <stdio.h>
 
// Macro definition
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

int main(){
    printf("Geeks for Geeks have %dK"
           " followers on Instagram",
           INSTAGRAM);
 
    return 0;
}
*/



//multiline macros

// way 1
/*
#include <stdio.h>

// Multi-line Macro definition
#define ELE 1, \
            2, \
            3

int main(){

    // Array arr[] with elements
    // defined in macros
    int arr[] = { ELE };
    for (int i = 0; i < 3; i++) {
        printf("%d  ", arr[i]);
    }
    return 0;
}
*/


// way 2
/*
#include <stdio.h>

// Multi-line Macro definition
#define ELE 1,2,3,4,5

int main(){

    // Array arr[] with elements
    // defined in macros
    int arr[] = { ELE };
    for (int i = 0; i < 5; i++) {
        printf("%d  ", arr[i]);
    }
    return 0;
}
*/




//function like macros

// way 1

/*
#include <stdio.h>

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main(){

    // Given two number a and b
    int a = 18, b = 76;

    printf("Minimum: %d", min(a, b));

    return 0;
}
*/

//way 2
/*
#include <stdio.h>

// Function-like Macro definition
#define min (((a) < (b)) ? (a) : (b))

int main(){

    // Given two number a and b
    int a = 18, b = 76;

    printf("Minimum: %d", min);

    return 0;
}
*/
