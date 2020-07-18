#include <iostream>
#include <vector>

using namespace std;

vector<int> collatz(int n, vector<int> v){
    int i;
    v.push_back(n);
    if (n == 1)
        return v;
    if (n % 2 == 0){
        v = collatz(n / 2, v);
    }
    else{
        v = collatz(n * 3 + 1, v);
    }
    return v;
}    

int main(int argc, char* argv[]){
    vector<int> v;
    int n, i;
    cin >> n;
    v = collatz(n, v);
    for (i = 0; i < v.size(); i++){
    cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
