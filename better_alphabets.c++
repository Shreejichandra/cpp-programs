#include <iostream>

using namespace std;

string can_read(string word, string known_letters){
    int known[26] = {0};
    for (char ch: known_letters) {
        known[ch - 'a'] = 1;
    }
    for (char ch: word) {
        if (!known[ch - 'a']) {
            return "No";
        }
    }
    return "Yes";
}

int main(){
	string known_letters;
	int n;
	cin >> known_letters;
	cin >> n;
	for (int i = 0; i < n; i++){
        string word;
	    cin >> word;
	    string answer = can_read(word, known_letters);
        cout << answer <<endl;
	}
	return 0;
}

            
