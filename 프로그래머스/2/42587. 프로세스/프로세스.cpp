#include <string>
#include <vector>
#include <algorithm> 
#include <deque>
#include <queue>

#include <iostream> 
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    deque<int> v; 
    queue<int> q; 
    queue<int> idx_q; 
    
    for(int i = 0; i < priorities.size(); i ++) {
        q.push(priorities[i]);
        v.push_back(priorities[i]);
        idx_q.push(i); 
    }
    sort(v.begin(), v.end(), greater<int>());
    
    while(1) {
        int tmp = q.front(); 
        int idx = idx_q.front();
        
        if(v[0] > tmp) {
            q.pop(); 
            idx_q.pop(); 
            
            q.push(tmp); 
            idx_q.push(idx); 
        } else { // 실행되는 경우 
            answer += 1; 
            v.pop_front(); 
            if (idx == location) {
                break;
            } 
            q.pop(); 
            idx_q.pop();
        }
    }
    
    return answer;
}