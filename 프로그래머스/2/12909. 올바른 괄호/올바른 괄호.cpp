#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    stack<char> st;
    
    for(char& ele: s) {
        if(ele == '(') {
            st.push(ele);
        } else { // ')'
            if(st.empty()) {
                return false; 
            } else {
                st.pop();
            }
        }
    }


    return st.empty();
}