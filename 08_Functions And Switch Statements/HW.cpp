//Swtich get stck in infinite loop
/*
key notes:
Action	                                         Effect
exit(0)	                                     Stops entire program immediately
break (inside switch)	                        Exits only switch
break (after switch)	                          Exits loop
Ctrl + C	                                   Manually stops a stuck program
return 0                                            exists the program
*/

//way1:
// #include <iostream>
// #include <cstdlib>  // needed for exit(0)

// using namespace std;

// int main() {
//     while (true) {  // infinite loop
//         int choice;
//         cout << "\nEnter choice (1=Hello, 2=Bye, 0=Exit): ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Hello!\n";
//                 break;

//             case 2:
//                 cout << "Bye!\n";
//                 break;

//             case 0:
//                 cout << "Exiting program...\n";
//                 exit(0);  // 🔚 immediately ends program
//                 // (you can also use `break;` + `if` to exit loop normally)
//                 // e.g. if (choice == 0) break;

//             default:
//                 cout << "Invalid choice\n";
//         }

//     }

//     cout << "This line will never be reached if exit(0) is used.\n";
//     return 0;
// }


//way 2:

#include<iostream>
using namespace std;

int main(){
while (true) {
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Option 1\n";
            break;
        case 2:
            cout << "Option 2\n";
            break;
        case 0:
            cout << "Exiting...\n";
            return 0;   // ends the program
        default:
            cout << "Invalid choice\n";
    }
}

}

//way 3:

// #include <iostream>
// using namespace std;

// int main() {
//     while (true) {   // infinite loop
//         int choice;
//         cout << "\nEnter choice (1=Hello, 2=Bye, 0=Exit): ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Hello!\n";
//                 break;   // exits only switch
//             case 2:
//                 cout << "Bye!\n";
//                 break;   // exits only switch
//             case 0:
//                 cout << "Exiting loop...\n";
//                 break;   // exits switch
//             default:
//                 cout << "Invalid choice\n";
//                 break;
//         }

//         // 🔽 This break checks if user entered 0 and stops the loop ,if you directly use it then after exiting switch it will end loop
//         if (choice == 0) {
//             break;   // exits while(true)
//         }
//     }

//     cout << "Program finished successfully!\n";
//     return 0;
// }
