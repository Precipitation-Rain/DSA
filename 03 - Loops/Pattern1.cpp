#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;
    //dont start from zero it wll iterate for 4 times
    //if you are starting from zero dont give = sign //(i<n) this is right way to write

    while(i<=n)
    {
        int j=1;

        while(j<=n)
        {
            cout<<"* ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}