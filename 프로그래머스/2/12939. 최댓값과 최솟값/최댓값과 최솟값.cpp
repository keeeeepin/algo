#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    // 문자열을 공백 기준으로 분리해서 벡터에 담기
    vector<int> ss;
    stringstream stream(s);
    string temp;
    
    while (getline(stream, temp, ' ')) {
        ss.push_back(stoi(temp));
    }
    
    // 정렬
    sort(ss.begin(), ss.end());
    
    answer = to_string(ss[0]) + " " + to_string(ss[ss.size()-1]);
    
    return answer;
}

int main() {
    string input_line;
    getline(cin, input_line);
    
    cout << solution(input_line) << endl;
    
    return 0;
}