#include <string>
#include <vector>

#include <numeric>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    int sz = arr.size(); 
    
    for(int i = 1; i < sz; i ++) {
        // temp 와 i의 최소공배수구하기 -> i-1에 결과 재할당
        arr[i] = lcm(arr[i-1], arr[i]);
    }
    
    answer = arr[sz-1];
    return answer;
}