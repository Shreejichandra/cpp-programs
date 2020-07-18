#include <iostream>
#include <stack>
using namespace std;
 
int reductant_braces(string s, stack<char> expr) {
    for (int i = 0; i < s.length(); i++) {
        expr.push(s[i]);
          
        if (s[i] == ')') {
            int count = 0;
            while (expr.top() != '(') {
                expr.pop();
                count ++;
            }
            expr.pop();
            if (count >= 3) {
                continue;
            } else {
                return 1;
            }
        
        }
    }
    return 0;
}
 
int main() {
    string s;
    cin >> s;
    stack<char> expr;
    cout << reductant_braces(s, expr);
    
    return 0;
} 
