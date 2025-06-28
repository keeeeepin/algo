#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int answer = 0;
void dfs(vector<int> numbers, int target, int sum, int cnt) {
    // TERMINAL Condition // 이 문제는 numbers의 원소 끝까지 가서 결과를 확인해야함 
    if(cnt == numbers.size()) {
        if (sum == target) {
            answer ++;
        }
        return; 
    }
    
    // ELSE
    dfs(numbers, target, sum + numbers[cnt], cnt + 1); 
    dfs(numbers, target, sum - numbers[cnt], cnt + 1); 
    
}

int solution(vector<int> numbers, int target) {
    answer = 0;
    dfs(numbers, answer, target, 0); // 첫번째 원소부터 시작 
    
    return answer;
}