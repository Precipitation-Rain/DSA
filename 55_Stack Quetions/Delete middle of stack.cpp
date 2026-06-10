#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{

    stack<int>inputStack({1,2,3,4,5});
    vector<int> temp;
    int N = 4;

   int top = inputStack.size() - 1;


   if( N % 2 == 0){

      while(top != (N/2)){
         int element = inputStack.top();
         temp.push_back(element);
         inputStack.pop();
         top--;
      }

      inputStack.pop();

      for(int i = temp.size() - 1 ; i >= 0 ;i--){
         inputStack.push(temp[i]);
      }

   }

   else{

      while(top != (((N+1) / 2) - 1)){
         int element = inputStack.top();
         temp.push_back(element);
         inputStack.pop();
         top--;
      }

      inputStack.pop();

      for(int i = temp.size() - 1 ; i >= 0 ;i--){
         inputStack.push(temp[i]);
      }

   }

   vector<int> ans;
   while(!inputStack.empty()){
    ans.push_back(inputStack.top());
    inputStack.pop();
   }

   for(int i = ans.size() - 1 ; i >= 0  ;i--){
    cout << ans[i] << " ";
   }

}

