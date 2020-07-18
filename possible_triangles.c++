/*
In a triangle, the sum of two sides is always greater than the third side. i.e a, b and c are sides of a triangle if all the three conditions are true
      a + b > c      
      b + c > a
      c + a > b
Write a function to count how many triangles are possible within a given range.
Sample input
1, 50
Sample output
9500
*/
#include <iostream>

using namespace std;

int possible_triangles(int start, int end){
    int i;
    int j;
    int k;
    int count = 0;
    for (i = start; i <= end - 2; i++){
        for (j = i + 1; j <= end - 1; j++){
            for (k = j + 1; k <= end; k++){
                if ((i + j > k) && (i + k > j) && (k + j > i))
                    count += 1;
            }
        }
    }
    return count;
}

int main(){
    int start;
    int end;
    cin >> start >> end;
    cout << possible_triangles(start, end);
    return 0;
}
