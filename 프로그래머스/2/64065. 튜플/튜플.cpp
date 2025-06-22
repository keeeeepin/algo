#include <string>
#include <vector>

#include <unordered_map> // hash map 
#include <algorithm> // vector desc sort -> sort() 

#include <iostream>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<int, int> m; 
    
    for(int i = 2; i < s.size() - 2; i ++) {
        if(isdigit(s[i])) {
            m[stoi(s.substr(i))]++;
            while('0' <= s[i] && s[i] <= '9') i++;
        }
    }
    
    // for(const auto& pair: m) {
    //     cout << pair.first <<  ", " << pair.second << endl; 
    // }
    
    vector<pair<int, int>> vv(m.begin(), m.end()); 
    
    
    // value 값이 클수록 앞에 -> 내림차순 
    sort(vv.begin(), vv.end(), 
         [](const pair<int, int>& a, const pair<int, int>& b) { return a.second > b.second;});
    
    for(int i = 0; i < vv.size(); i++) {
        answer.push_back(vv[i].first);
    }
    
    
    return answer;
}