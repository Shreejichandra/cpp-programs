#include <iostream>
#include <vector>
using namespace std;

vector<string> fizzbuzz(int n){
    vector<string> v;
    for (int i = 1; i <= n; i++){
    if(i % 15 == 0) {
      v.push_back("FizzBuzz"); 
      }
      else if(i % 5 == 0 ){
      v.push_back("Buzz");
      }
      else if(i % 3 == 0) {
      v.push_back("Fizz");
      }
       else {
       v.push_back(to_string(i));
      }
    }
    return v;
}
 
int main(){
    int n;
    cin>>n;
    vector<string> sequence = fizzbuzz(n);
    for (int i = 0; i < sequence.size(); i++){
        cout << sequence[i] << " ";
    }
    return 0;
}

