#include <string>
#include <vector>
#include <algorithm> 
#include <iostream> 
using namespace std;

// solution > 
// 모든 경우 만들어서 배열에 담기 
vector<string> result; 

void permutation(vector<string>& v, string tmp, int depth, int r) {
    // depth 확인
    if (depth == r) {
        result.push_back(tmp); 
        return; 
    }
    
    // 추가
    for(int i = 0; i < v.size(); i ++) { // FIX : r -> v.size() 
        tmp += v[i]; 
        permutation(v, tmp, depth + 1, r);
        tmp.pop_back(); 
    }
    
}

int solution(string word) {
    int answer = 0;
    
    vector<string> v = {"A", "E", "I", "O", "U"};
    
    for(int i = 1; i <= 5; i ++) {
        permutation(v, "", 0, i);     
    }
    
    sort(result.begin(), result.end());
    
    for(int i = 0; i < result.size(); i ++) {
        if (result[i] == word) {
            answer = i + 1; 
            break;
        }
    }
    
    return answer;
}