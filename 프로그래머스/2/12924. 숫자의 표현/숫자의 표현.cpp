#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i = 0; i < n; i ++) {
        
        int tmp = i; 
        int tot = 0; 
        
        while(1) {
            tmp += 1;
            tot += tmp; 
            
            if(tot >= n) {
                break;
            }
        }
        if (tot == n) {
            answer += 1;
        }
    }
    return answer;
}