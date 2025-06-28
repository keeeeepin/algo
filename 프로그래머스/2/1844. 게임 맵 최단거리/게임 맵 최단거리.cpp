#include<vector>

#include <queue>
#include <algorithm> 
#include <cstring>

using namespace std;

// Global 
int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};
int answer = 0;

bool visited[100][100];
int dist[100][100]; 

queue<pair<int, int>> q; 

int solution(vector<vector<int> > maps)
{
    int r_sz = maps.size(); 
    int c_sz = maps[0].size(); 
    
    // init 
    memset(dist, -1, sizeof(dist));
    memset(visited, false, sizeof(visited));
    
    q.push({0, 0});
    dist[0][0] = 1;        // 시작점 거리
    visited[0][0] = true;  // 시작점 방문 표시
    
    while(!q.empty()) {
        auto current_pos = q.front();
        int cr = current_pos.first; 
        int cc = current_pos.second; 
        q.pop(); 
        
        // Terminal Condition 
        if(cr == r_sz - 1 && cc == c_sz - 1) {
            return dist[cr][cc];
        }
        
        // 4 direction 
        for (int d = 0; d < 4; d++) {
            int nr = cr + dr[d];
            int nc = cc + dc[d];
            
            // 조건 체크: 범위, 방문여부, 이동가능여부
            if (nr >= 0 && nr < r_sz && nc >= 0 && nc < c_sz && 
                !visited[nr][nc] && maps[nr][nc] == 1) {
                visited[nr][nc] = true; 
                q.push({nr, nc});
                dist[nr][nc] = dist[cr][cc] + 1;  // 거리 업데이트
            }
        }
    }
    
    return dist[r_sz - 1][c_sz - 1];  // -1이면 도달 불가능
}