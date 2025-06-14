#include <string>
#include <vector>

#include <numeric>
#include <iostream> 

using namespace std;


int gcd(int a, int b ) {
    
    int temp = 1; 
    
    while(temp) { // temp != 0
        temp = a % b; 
        a = b; 
        b = temp; 
    }
    
    return a; 
}

int solution(vector<int> arr) {
    int answer = 0;
    int sz = arr.size(); 
    int temp;
    
    for(int i = 1; i < sz; i ++) {
        // temp 와 i의 최소공배수구하기 -> i-1에 결과 재할당
        temp = gcd(arr[i], arr[i-1]);
        arr[i] = (arr[i-1] * arr[i]) / temp; 
    }
    
    answer = arr[sz-1];
    return answer;
}