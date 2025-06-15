#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer = {0, 0};
    map<int, int> person_m; 
    map<string, int> words_m;
    int idx; 

    // init
    person_m[1] = 1; 
    words_m[words[0]] += 1;
    
    for(int i = 1; i < words.size(); i ++) {
        // 현재 person의 value + 1
        idx = (i%n) + 1;
        person_m[idx] += 1;
        
        // 단어가 나온적이 있는지 확인
        // 나온적이 있다면
        // answer = {현재 person의 key, value}
        if(words_m[words[i]] == 1 || words[i][0] != words[i-1].back()) {
            answer = {idx, person_m[idx]};
            break; 
        } else {
            words_m[words[i]] += 1;
        }
    }
    
    return answer;
}