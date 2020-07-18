#include <iostream>

using namespace std;

int main(){
    int start;
    cin >> start;
    int end;
    cin >> end;
    int possible_triangles = 0;

    for(int i = start; i < end; i ++){
        for(int j = i+1; j < end; j ++){
                if ( i + j < end + 1)
                    possible_triangles += i - 1;
                else
                    possible_triangles += end - j;
        }
    }

    //possible_triangles += end - start + 1;
    cout << possible_triangles << endl;
    return 0;
}
