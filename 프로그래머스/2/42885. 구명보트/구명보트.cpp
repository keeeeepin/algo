#include <string>
#include <vector>
#include <algorithm>

#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int sz = people.size();
    
    int temp = 0; 
    
    int s = 0; 
    int e = sz - 1;
    
    sort(people.begin(), people.end());
    
    while(s < e) {
        temp += people[e];
        
        if(temp + people[s] > limit) {
            answer += 1;
            temp = 0;
            e -= 1;
        }
        else if(temp + people[s] <= limit) {
            answer += 1; 
            temp = 0; 
            e -= 1;
            s += 1;
        }
    }

    if(s == e) {
        answer += 1;
    }
    
    return answer;
}