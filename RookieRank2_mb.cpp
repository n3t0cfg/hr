#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> types(n);
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
    }
    
    vector<int> cont(5);
    
    for (int i = 0; i < n; i++) {
        cont[types[i] - 1]++;
    }
    
    int max = -1;
    int result = -1;
    
    for (int i = 0; i < 5; i++) {
        if (max < cont[i]){
            max = cont[i];
            result = i +1;
        }
    }
    
    cout << result;
    return 0;
}