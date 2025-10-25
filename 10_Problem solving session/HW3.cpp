//triplet sum
/*
1.return array(more than one element)
*/

#include<iostream>
using namespace std;

void tripletsum(int arr[] , int n,int sum){
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i] + arr[j] + arr[k] == sum){
                    cout<<arr[i] << " + " <<+ arr[j] << " + " << + arr[k] << " = "<<sum;
                    cout <<endl; 
                    cout<<"Indexex are: "<<i<<" "<<j<<" "<<k;
                    cout<<endl;
                }
            }
        }
    }

}

int main(){
    int nums[8] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int target = 8;

    tripletsum(nums,n,target);
}