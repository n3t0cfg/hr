#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    
    int tmp = 1000000000;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(a[i] - a[j]) < tmp){
                tmp = abs(a[i] - a[j]);
            }
        }
    }
    
    cout << tmp;
    return 0;
}