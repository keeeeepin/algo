#include <string>
#include <vector>
#include <iostream> 

#include <map> 

using namespace std;

map<string, int> discount_map; 
map<string, int> want_map; 

bool isSameWithWant(vector<string> want) {
    bool isSame = true; 
    
    // want랑 비교
    for(int i = 0; i < want_map.size(); i ++) {
        if(want_map[want[i]] != discount_map[want[i]]) {
            isSame = false; 
            break; 
        }
    }
    return isSame; 
}

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    bool isSame = true; 
    
    // want에 대한 map구하기
    for(int i = 0; i < want.size(); i++) {
        want_map[want[i]] = number[i]; 
    }
    
    // 처음 0 - 10 구간에 대해 map 구하기
    for(int i = 0; i < 10; i ++) {
        discount_map[discount[i]] += 1; 
    }
    
    if(isSameWithWant(want)) {
        answer += 1; 
    }
    
    int s = 1; 
    int e = 10; 
    
    while(e < discount.size()) {
        discount_map[discount[s-1]] -= 1; 
        discount_map[discount[e]] += 1; 
        
        if(isSameWithWant(want)) {
            answer += 1; 
        }
        s += 1; 
        e += 1; 
    }
    
    return answer;
}