#include <iostream>
#include <vector>

using namespace std;

vector<int> all_factors(int n){
    vector<int> factors;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            factors.push_back(i);
        }
    }
    return factors;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> factors = all_factors(n);
    cout << factors[k - 1];
    return 0;
}
