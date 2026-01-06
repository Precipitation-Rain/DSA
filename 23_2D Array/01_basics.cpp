#include<iostream>
using namespace std;

int main()
    {
        //creating 2d array
        int arr[3][4];

        //taking input 
        //row wise input

        /*
        for(int row = 0 ; row < 3 ;row++)
            {
                for(int col = 0 ; col < 4 ;col++)
                    {
                        cin>>arr[row][col];
                    }
            }
        */
        //column wise input

        // for(int col = 0 ; col < 4 ;col++)
        //     {
        //         for(int row = 0 ; row < 3 ;row++)
        //             {
        //                 cin>>arr[row][col];
        //             }
        //     }


        //printing output row wise 

            // for(int row = 0 ; row < 3 ;row++)
            //  {
            //         for(int col = 0 ; col < 4 ;col++)
            //         {
            //             cout<<arr[row][col]<<" ";
            //         }
            //         cout<<endl;
            // }
            // cout<<endl<<endl;

        //printing output column wise => bas aise hi
        /*
            for(int col = 0 ; col < 4 ;col++)
             {
                    for(int row = 0 ; row < 3 ;row++)
                    {
                        cout<<arr[row][col]<<" ";
                    }
                    cout<<endl;
            }
        */

        // initializing the ad array

        // int initialized_2d_array[3][3] = {1,2,3,4,5,6,7,8,9};
        int initialized_2d_array[3][3] = {{1,11,111},{2,22,222},{3,33,333}};

        
            for(int row = 0 ; row < 3 ;row++)
             {
                    for(int col = 0 ; col < 3 ;col++)
                    {
                        cout<<initialized_2d_array[row][col]<<" ";
                    }
                    cout<<endl;
            }
            cout<<endl<<endl;



        
    }