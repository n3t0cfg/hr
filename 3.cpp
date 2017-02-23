#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int sum = 0;
    int num = 0;
    int w = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> num;
            sum += num;
        }
    }
    
    cout << 45 - sum;
    
}
