#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
    {
        vector<int> ans;

        ans.push_back(23);
        ans.push_back(33);
        ans.push_back(33);
        ans.push_back(33);
        ans.push_back(63);
        ans.push_back(73);
        ans.push_back(83);

        cout<<"Finding an element : "<<binary_search(ans.begin(),ans.end(),33)<<endl;

        cout<<"Lower Bound : "<<lower_bound(ans.begin(),ans.end(),33) - ans.begin()<<endl;

        cout<<"Upper Bound : "<<upper_bound(ans.begin(),ans.end(),33) - ans.begin()<<endl;

        /*
        
        In C++ STL (Algorithms / Containers), lower_bound and upper_bound are used to find positions in a sorted range.

They work mainly with:

vector

array

deque

set, map (as member functions)

1️⃣ lower_bound
📌 Definition

lower_bound returns an iterator to the first element that is NOT LESS than the given value
👉 means first element ≥ key

🔹 Syntax
iterator lower_bound(iterator start, iterator end, value);

🔹 Example
vector<int> v = {1, 2, 4, 4, 4, 6, 7};

auto it = lower_bound(v.begin(), v.end(), 4);

cout << it - v.begin();   // index

🔹 Result
2


📖 Explanation:

First 4 appears at index 2

So lower_bound points to index 2

2️⃣ upper_bound
📌 Definition

upper_bound returns an iterator to the first element that is GREATER than the given value
👉 means first element > key

🔹 Syntax
iterator upper_bound(iterator start, iterator end, value);

🔹 Example
auto it = upper_bound(v.begin(), v.end(), 4);
cout << it - v.begin();

🔹 Result
5


📖 Explanation:

All 4s are at index 2,3,4

First element greater than 4 is 6 at index 5

3️⃣ Visual Difference

For:

v = {1, 2, 4, 4, 4, 6, 7}

Function	Condition	Points to
lower_bound(4)	≥ 4	first 4
upper_bound(4)	> 4	6
4️⃣ Count occurrences using both
int count = upper_bound(v.begin(), v.end(), 4)
          - lower_bound(v.begin(), v.end(), 4);


📌 Output: 3

5️⃣ Important Notes ⚠️

✅ Array/Vector must be sorted
❌ On unsorted data → wrong answer

6️⃣ In set and map

They are member functions:

set<int> s = {1, 2, 4, 4, 6};

auto it1 = s.lower_bound(4);  // ≥ 4
auto it2 = s.upper_bound(4);  // > 4

7️⃣ Time Complexity

O(log n) (binary search)

🧠 One-line Memory Trick

Lower bound → "left boundary" of key

Upper bound → "right boundary" of key
        
        */
        //

        int a = 6,b=8;

        cout<<"Max :"<<max(a,b)<<endl;
        cout<<"Min : "<<min(a,b)<<endl;

        //

        cout<<" A and B : "<<a<<" "<<b<<endl;

        swap(a , b);

        cout<<" A and B : "<<a<<" "<<b<<endl;

        //

        string ab = "abcd";

        reverse(ab.begin(),ab.end());

        //
        vector<int> v = {2,34,4,15,16};
          for(int i = 0 ; i < v.size() ;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
      
        rotate(v.begin(),v.begin()+3,v.end());
        //  rotate(v.end(),v.end() - 2,v.end());
        for(int i = 0 ; i < v.size() ;i++)
            {
                cout<<v[i]<<" ";
            }

            //
        sort(v.begin(),v.end());
        cout<<endl;
         for(int i = 0 ; i < v.size() ;i++)
            {
                cout<<v[i]<<" ";
            }

            sort(v.begin(),v.end(), greater<int>());
        cout<<endl;
         for(int i = 0 ; i < v.size() ;i++)
            {
                cout<<v[i]<<" ";
            }   


            


    }