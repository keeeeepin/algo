#include <string>
#include <vector>

#include <iostream>
#include <algorithm>

#include <map> 


using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    map<string, int> m; 
    
    sort(phone_book.begin(), phone_book.end(), [](const auto& a, const auto& b) {
        return a.size() < b.size();
    });
    
    for(int i = 0; i < phone_book.size(); i ++) {
        string s; 
        for(int j = 0; j < phone_book[i].size(); j++) {
            s += phone_book[i][j];
            if(m[s]) {
                answer = false; 
                return answer; 
            }
        }
        m[s] += 1; 
    }
        
    
    return answer;
}