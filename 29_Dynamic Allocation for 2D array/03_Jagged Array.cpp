#include<iostream>
using namespace std;

int main()
    {
        int row ;
        cout << "Enter rows : ";
        cin >> row;

        int ** arr = new int *[row];

        //no of columns are imp
        int * col = new int [row];

        //creating array
        for(int i = 0 ; i < row ;i++)
            {
                cout << " Enter the no of column in " << i << " th row : ";
                cin >> col[i];

                arr[i] = new int[col[i]];

            }

        //Taking Input
        for(int i = 0 ; i  < row ; i++)
            {
                for(int j = 0 ; j < col[i] ; j++)
                    {
                        cin>>arr[i][j];
                    }
            }

        // Giving Output
        for(int i = 0 ; i  < row ; i++)
            {
                for(int j = 0 ; j < col[i] ; j++)
                    {
                        cout << arr[i][j] << " ";
                    }

                cout << endl;
            }

       for(int i = 0 ; i < row ;i++)
            {
                delete [] arr[i];
            }

            delete [] arr;




    }