#include <iostream>
#include <string>

using namespace std;


int trailing_zeros(int n){
    int count = 0;
    for (int i = 5; n / i >= 1; i = i * 5){
        count += n / i;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    cout << trailing_zeros(n);
    return 0;
}
