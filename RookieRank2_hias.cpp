#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    vector<char> word = {'h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k'};
    for(int a0 = 0; a0 < q; a0++){
        string founded = "NO";
        int cont = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length() ; i++) {
            if (s[i] == word[cont]){
                cont ++;
            }
            if (cont == 10){
                founded = "YES";
                break;
            }
        }
        
        cout << founded;
    }
    
    return 0;
}
