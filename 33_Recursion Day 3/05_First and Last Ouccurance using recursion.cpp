#include<iostream>
using namespace std;

int firstouccrance(int arr[] , int start , int end , int target){

    int ans = -1;

    //base case

    if(start > end)
        return ans ;

    // preprocessing

        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
            {
                ans = mid;
                end = mid - 1;

            }
        
        else if( arr[mid] < target)
                {
                    firstouccrance( arr , mid + 1 , end , target);
                }

        else    
                {
                    firstouccrance( arr , start , mid - 1, target);
                }
    
    


}

int lastouccrance(int arr[] , int start , int end , int target){

    int ans = -1;

    //base case

    if(start > end)
        return ans ;

    // preprocessing

        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
            {
                ans = mid;
                start = mid + 1;

            }
        
        else if( arr[mid] < target)
                {
                    firstouccrance( arr , start, end , target);
                }

        else    
                {
                    firstouccrance( arr , start , end, target);
                }

}

int main(){

   
    int arraySize;
    cout <<"Enter array size : ";
    cin >> arraySize;


    int * arr = new int[arraySize];
    cout <<"Enter the array elements in incresing order : "<<endl;
    for(int i = 0 ; i < arraySize ;i++)
        {
            cin >> arr[i];
        }


    int target ;
    cout <<"Enter element to find first ouccrence and last ouccrence : ";
    cin >> target;

    int start = 0;
    int end = arraySize - 1;
    
    cout<<"First occurrence of "<<target<<" is "<< firstouccrance(arr , start , end ,  target)<<endl;
    cout<<"Last occurrence of "<<target<<" is "<< lastouccrance(arr , start ,end ,  target);


}