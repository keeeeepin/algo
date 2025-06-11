#include <string>
#include <vector>
#include <string> 
#include <algorithm> 
using namespace std;

// 이진수로 변환했을 때 1의 갯수 반환
int transform_cnt(int n) {
    int result = 0; 
    string s = "";
    
    while(n != 0) {
        s += to_string(n % 2); 
        n /=2; 
    }
    
    reverse(s.begin(), s.end()); 
    
    for(int i = 0; i < s.length(); i ++) {
        if (s[i] == '1') {
            result += 1; 
        }
    }
    
    return result; 
}


int solution(int n) {
    int answer = 0;
    int n_cnt = transform_cnt(n); 
    
    for(int i = n+1; i <= 1000000; i ++) {
        if(transform_cnt(i) == n_cnt) {
            answer = i; 
            break; 
        }
    }
    return answer;
}