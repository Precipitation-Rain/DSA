#include<iostream>
using namespace std;

int getSum(int number)
    {

        //base case
        if(number == 0)
            return 0;

        // int smallproblem = getSum(number - 1);
        // int bigProblem = number + smallproblem;
        // return bigProblem;

        return number + getSum( number - 1);
        

    }

int main()
    {
        int number ;
        cout <<"Enter the number : ";
        cin >> number;

        int sum = getSum(number);

        cout <<"Sum is : "<< sum;

    }

