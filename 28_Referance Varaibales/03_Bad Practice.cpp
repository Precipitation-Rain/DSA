#include<iostream>
using namespace std;

//may ask in mcq
int& update1(int n)
    {
        int num = n;
        int &ans = num;
        return ans;
    }
    
//may ask in mcq
int *  update2(int n)
    {
        int *ptr = &n;
        return ptr;
        
    }

int main()
    {
        int n = 5;
        cout << "Before : "<< n << endl;
         int ans = update1(n);
        cout << " After : " << ans << endl;
        cout << " After : " << n << endl;



        cout << "Before : "<< n << endl;
        int *ans2 =  update2(n);

        cout << " After : " << ans2 << endl;
        cout << " After : " << n << endl;



    }