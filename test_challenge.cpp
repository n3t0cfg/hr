#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int counting(string s) {
    
    bool go = true;
    unsigned int index = 0;
    unsigned int countn = 0;
    
    for (int i = 0; i < s.length() - 1; i++) {
        char current = s[i];
        unsigned int buffer = 1;
        for (int j = i+1; j < s.length(); j++) {
            if (s[j] == current){
                buffer++;
            }
            else{
                cout << current << ", " << buffer << "\n";
                string tmp = s.substr(j,j+buffer-1);
                cout << "> " << tmp << "\n";
                unsigned int tmpn = count(tmp.begin(), tmp.end(), '1');
                if (tmpn == buffer){
                    countn++;
                }
                break;
            }
        }
    }
    
    return countn;

}


int main() {
    string s = "00110";
    
    cout << counting(s);
    
    // cout << count(s.begin(), s.end(), '1');
}



