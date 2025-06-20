#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    vector<int> s; 
    int cnt = 1;
    int strd = 0; 
    int sz = progresses.size();
    
    // 일수 계산하기
    for(int i = 0; i < sz; i++) {
        int tmp = 100 - progresses[i];
        
        if(tmp % speeds[i] == 0) {
            s.push_back(tmp / speeds[i]);
        } else {
            s.push_back(tmp / speeds[i] + 1);
        }
    }
    
    strd = s[0];
    for(int i = 1; i < sz; i ++) {
        if(s[i] > strd) {
            answer.push_back(cnt);
            strd = s[i];
            cnt = 1; 
        }
        else {
            cnt += 1;
        }
    }
    
    answer.push_back(cnt);
    
    return answer;
}