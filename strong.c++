#include <iostream>
#include <vector>

using namespace std;

int factorial(int a) {
    if (a <= 1) {
        return 1;
    }
    return a * factorial(a - 1);
}

int is_strong(int n) {
    int temp = n;
    int r;
    int answer = 0;
    while (temp) {
        r = temp % 10;
        answer += factorial(r);
        temp = temp / 10;
    }
    return (answer == n);
}

int main(int argc, char* argv[])
{   
    int i;
    vector <int> v;
    int n = stoi(argv[1]);
    for (int k = 0; k < 300; k++) {
        for (i = 1; i < n; i++) {
            if (is_strong(i)) {
                v.push_back(i);
            }
    
        }
    }
    // Uncomment to display the numbers
   /*for (const int x: v) {
       cout << x << endl;
    }*/
    return 0;
}

