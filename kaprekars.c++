#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int sort(string s){
    sort(s.begin(), s.end());
    return stoi(s);
}


int reverse_sort(string s){
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    return stoi(s);
}


int next(int n){
    return reverse_sort(to_string(n)) - sort(to_string(n));
}


/*vector<int> kaprekars(int n){
    vector<int> v = {n};
    if (next(n) != n){
        vector<int> v2 = kaprekars(next(n));
        v.insert(v.end(), v2.begin(), v2.end());
        for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
        cout << endl;
        for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    }
    return v;
    
}
*/
vector<int> kaprekars(int n){
    vector<int> v;
    while (n != next(n)){
        v.push_back(n);
        n = next(n);
    }
    v.push_back(n);
    return v;
}

int main(){
    int n;
    cin >> n;
    vector<int> v = kaprekars(n);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " "; 

    return 0;
}

