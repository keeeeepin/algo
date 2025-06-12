#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int n_list[100000]; 
    int na_list[100000]; 
    
    // 0, 1 번 인덱스 초기값 할당
    n_list[0] = 0;
    n_list[1] = 1; 
    
    for(int i = 2; i <= n; i ++) {
        n_list[i] = (n_list[i-1] + n_list[i-2]) % 1234567;
        // na_list[i] = (n_list[i]) % 1234567;
    }

    answer = n_list[n];
    
    return answer;
}