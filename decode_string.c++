#include <iostream>
#include <stack>


using namespace std;

int main() {
    string s;
    int i;
    string answer;
    stack<int> seq;
    cin >> s;
    
    for (i = 0; i <= s.length(); i++) {
        seq.push(i + 1);
        
        if (s[i] == 'I' || i == s.length()) {
            while (! seq.empty()) {
                answer += to_string(seq.top());
                seq.pop();
            }
        }
    }
    
    cout << answer;
}
