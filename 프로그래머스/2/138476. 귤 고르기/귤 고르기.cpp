#include <string>
#include <vector>
#include <algorithm>
#include <map> 

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    int tmp = 0; 
    
    map<int, int> m; 
    vector<int> v; 
    
    for(int e : tangerine) {
        m[e] += 1; 
    }
    
    for(auto e : m) {
        v.push_back(e.second); 
    }
    
    sort(v.begin(), v.end(), greater<int>());
    
    for(int e : v) {
        tmp += e;
        answer += 1;
        
        if(tmp >= k) {
            break; 
        }
    }
    
    return answer;
}