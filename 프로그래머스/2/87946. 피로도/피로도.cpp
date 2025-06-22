#include <string>
#include <vector>
#include <algorithm>

#define MAX_SZ 8

using namespace std;

int ans = 0; 
bool visited[MAX_SZ];

// DFS Function 
void dfs(int cnt, int k, vector<vector<int>> &dun) {
    // update max
    if (cnt > ans) {
        ans = cnt; 
    }
    
    // search
    for(int i = 0; i < dun.size(); i ++) {
        if(!visited[i] && dun[i][0] <= k) {
            visited[i] = true;
            dfs(cnt + 1, k - dun[i][1], dun);
            visited[i] = false; 
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    
    dfs(0, k, dungeons);
    
    return ans;
}