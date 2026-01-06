#include<iostream>
using namespace std;
# include<vector>

int main()
    {


        vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

        vector<bool>prime(arr.size() + 1 , true);
        
        prime[0] = prime[1] = false;

        for(int i = 2 ; i < arr.size() ;i++)
            {

                if(prime[i])
                    {
                        for(int j = 2 * i ; j < arr.size() ;j = j + i)
                            {
                                prime[j] = false;
                            }
                    }
            }


        for(int i = 0 ; i < arr.size() ;i++)
            {
                if(prime[i])
                    {
                        cout<<i<<" ";
                    }
            }
    }