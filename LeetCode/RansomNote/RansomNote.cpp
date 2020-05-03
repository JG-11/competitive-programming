#include <iostream>
#include <unordered_map>

using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> l;
    
    for(int i = 0; i < magazine.length(); i++) {
        l[magazine[i]]++;
    }
    
    bool exists = true;
    
    for(int i = 0; i < ransomNote.length(); i++) {
        if(l.count(ransomNote[i]) && l[ransomNote[i]] != 0) {
            l[ransomNote[i]]--;
        } else {
            exists = false;
            
            break;
        }
    }
    
    return exists;
}

int main (void) {
    
    string ransomNote = "aa", magazine = "ab";
    
    bool res = canConstruct(ransomNote, magazine);
    
    cout << (res == 1 ? "true" : "false") << endl;

    return 0;
}
