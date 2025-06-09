#include <string>
#include <vector>
#include <iostream>
#include <algorithm> 

using namespace std;


// 0을 제외한 길이 반환
int minusZero(string s) {
    
    int zeroCnt = 0; 
    
    for(int i = 0; i < s.length(); i ++) {
        if(s[i] == '0') {
            zeroCnt += 1; 
        }
    }
    
    return s.length() - zeroCnt; 
}

// 이진수 변환
string transform(int d) {
    
    string result = "";
    
    while(d != 0) {
        result += to_string(d % 2);
        d /= 2;
    }
    
    reverse(result.begin(), result.end()); 
    
    return result; 
}



vector<int> solution(string s) {
    vector<int> answer;
    int zeroCnt = 0; 
    int changeCnt = 0; 
    int tmp; 
    
    while( s != "1") {
        tmp = minusZero(s);
        zeroCnt += s.size() - tmp; 
        s = transform(tmp);
        
        changeCnt +=1; 
    }
    answer.push_back(changeCnt);
    answer.push_back(zeroCnt);
    
    return answer;
}