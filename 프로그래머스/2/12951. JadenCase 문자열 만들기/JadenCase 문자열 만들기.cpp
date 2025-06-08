#include <string>
#include <vector>

#include <algorithm>
#include <cctype> 

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool isNew = true; 
    
    for(int i = 0; i < s.size(); i ++) {
        if (s[i] == ' ') {
            isNew = true; 
        } else {
            if (isNew) {
                isNew = false;
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    
    return s;
}