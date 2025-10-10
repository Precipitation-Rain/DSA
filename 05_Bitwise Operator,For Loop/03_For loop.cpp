/*
for loop:

for(initialisation;condition;updation){
body
}

1]You can skip all 3 steps or any of them
2]you can add multiple initialisation,condition and updation



break is used to get out of current loop
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1;i<= n;i++){
        cout<<i<<endl;
    }
}

//1.1]
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     for(;i<= n;i++){
//         cout<<i<<endl;
//     }
// }

//1.2]
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     for(;i<= n;){
//         cout<<i<<endl;
//         i++;
        
//     }
// }

//1.3]

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     for(;;){

//         if(i<= n){
//             cout<<i<<endl;
//         }
//         else{
//             break;
//         }
        
//         i++;
        
//     }
// }

//2]


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

    
//     for(int i = 1,j = 1 ; i <= n , j<=n ; i++ , j++){

//         cout<<i<<" "<<j<<endl;
        
        
//     }
// }




