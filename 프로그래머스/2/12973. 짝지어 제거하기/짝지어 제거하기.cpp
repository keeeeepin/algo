#include <iostream>
#include<string>

#include <stack> 

using namespace std;

int solution(string s)
{
    int answer = 1;
    // stack
    stack<int> st; 
    
    // for i, s
    for (int i = 0; i < s.length(); i ++) {
        if(st.empty()) {
            st.push(s[i]);
        }
        else if(st.top() == s[i]) {
            st.pop(); 
        } 
        else {
            st.push(s[i]);
        }
    }
    // if s.empty push
    // else s.top == i elememt
     // pop
    // else push
    
    // if stack not empty
    // ans=o
    if(not st.empty()) {
        answer = 0; 
    }

    return answer;
}