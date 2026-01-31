#include<iostream>
using namespace std;

void reachHome(int src , int dest)
    {

        cout << "Sourcs = "<< src <<" Destination = "<< dest << endl;
        
        // base case
        if(src == dest)
            {
                cout << "Pahuch gaya "<<endl;
                return ;
            }

        //processing
        src++;

        //recursive call => we can't do processing in fucntion call
        
        reachHome(src,dest);
    }

int main()
    {
        int src = 1;
        int dest = 10;

        reachHome(src , dest);

    }