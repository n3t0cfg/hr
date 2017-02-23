#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned long n;
    string road;
    int valleys = 0;
    bool down = false;
    cin >> n;
    cin >> road;
    int level = 0;
    for (int i = 0; i < n; i++) {
        if(road[i] == 'U'){
            level++;
        }
        if(road[i] == 'D'){
            level--;
            if (level < 0){
                down = true;
            }
        }
        if((level == 0) and (down == true)){
            valleys++;
            down = false;
        }
    }
    
    cout << valleys;
}