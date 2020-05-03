#include <iostream>
#include <unordered_map>

using namespace std;

int numJewelsInStones(string J, string S) {
    unordered_map<char, int> m;
    
    for(int i = 0; i < S.length(); i++) {
        m[S[i]]++;
    }
    
    int total = 0;
    
    for(int i = 0; i < J.length(); i++) {
        total += m[J[i]];
    }
    
    return total;
}

int main (void) {
    string J = "aA", S = "aAAbbbb";
    
    cout << numJewelsInStones(J, S) << endl;

    return 0;
}