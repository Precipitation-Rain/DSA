//sorting
/*
without sort function
*/
#include <iostream>
#include <algorithm>  // for sort()
using namespace std;

int main() {
    int arr[9] = {0,1,2,2,1,0,0,1,2};
    int n = 9;

    sort(arr, arr + n);   

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}