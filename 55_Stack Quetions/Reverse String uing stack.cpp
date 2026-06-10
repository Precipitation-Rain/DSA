#include<iostream>
#include<stack>
using namespace std;


int main(){

    string s = "Rajvardhan";
    stack<int> st;

    for(int i = 0 ; i < s.size() ;i++){
        st.push(s[i]);
    }

    string temp = "";

    int top = st.size() -1 ;
    while(top != -1) {
        temp.push_back(st.top());
        st.pop();
        top--;

    }

    cout << s << endl;
    cout << temp << endl;


}