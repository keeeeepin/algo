#include <string>
#include <vector>
#include <set>
#include <iostream> 

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int sz = elements.size();
    int temp = 0; 
    int result; 
    int cnt = 0; 
    // set 자료형
    set<int> _set; 
    
    for(int i = 1; i <=sz; i ++) {
        for(int j = 0; j < sz; j ++) {
            temp = j; 
            result = 0;
            cnt = 0; 
            
            while( cnt < i) {
                result += elements[temp];
                temp = (temp + 1) % sz; 
                cnt += 1; 
            }
            _set.insert(result); 
        }
    }
    
    answer = _set.size();     
    return answer;
}