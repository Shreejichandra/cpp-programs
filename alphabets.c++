#include <iostream>

using namespace std;

string can_read(string word, string known_letters){
    int count = 0;
    for (int i = 0; i < word.length(); i++){
        for (int j = 0; j < known_letters.length(); j++){
	       if (word[i] == known_letters[j]){
	           count ++;
	           break;
	       }
	   }
	}
	if (count == word.length()){
	    return "Yes";
	}
	return "No";
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

            
