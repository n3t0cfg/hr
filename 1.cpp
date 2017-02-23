#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int tallest = 0;
    int count = 0;
    cin >> n;
    vector<int> height(n);
    for(int height_i = 0;height_i < n;height_i++){
        cin >> height[height_i];
        if (tallest == height[height_i]) count++;
        if (tallest < height[height_i]){
            tallest = height[height_i];
            count  = 1;
        }
    }
    
    cout << count;
}
