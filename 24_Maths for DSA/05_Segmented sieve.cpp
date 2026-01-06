#include<iostream>
using namespace std;
# include<vector>
# include<cmath>

int main()
    {


        //creating an array
        long long int left,right;
        cout<<"Enter the left range and right range : ";
        cin>>left>>right;

        vector<int> arr ;
        for(long long int i = left ; i <= right ;i++)
            {
                arr.push_back(i);
            }
        
        // creating boolean array.
        vector<bool>prime(right - left + 1 , true);

        if(left == 1) prime[0] = false;
      
        // generating prime no's b/w sqrt(R)
        vector<int> ans;
        long long int primeRange = sqrt(right);

        for(long long int i = 2 ; i <= primeRange ; i++)
            {
                long long int n = i;
                bool isPrime = true;
                for(long long int j = 2 ; j < n ; j++)
                    {
                        if(n % j == 0 )
                            {
                            isPrime = false;
                            break;
                            }
                    }

                    if(isPrime == true)
                        {
                            ans.push_back(n);
                        }
            }

        // finding all prime
        for(long long int i = 0 ; i < ans.size() ;i++)
            {

                        for(long long int j = left  ; j <= right  ; j++)
                            {
                                if(j % ans[i] == 0 && j != ans[i] )
                                    {
                                       long long int index = j - left;
                                        prime[index] = false;
                                    }
                            }
                    
            }


        for(long long int i = left ; i <= right ;i++)
            {
                long long int index = i - left;
                if(prime[index])
                    {
                        cout<<i<<" ";
                    }
            }
    }