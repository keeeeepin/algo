
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    // 오름차순 정렬
    sort(A.begin(), A.end());
    
    
    // 내림차순 정렬
    sort(B.begin(), B.end(), greater<int>());
    
    // 최솟값 계산
    for(int i = 0; i < A.size(); i ++) {
        answer += A.at(i) * B.at(i);
    }
    
    
    return answer;
}