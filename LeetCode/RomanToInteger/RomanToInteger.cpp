#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int romanToInteger(string s) {
    int sum = 0;
    
    map<char, int> symbols;
    symbols.insert({ 'I', 1 });
    symbols.insert({ 'V', 5 });
    symbols.insert({ 'X', 10 });
    symbols.insert({ 'L', 50 });
    symbols.insert({ 'C', 100 });
    symbols.insert({ 'D', 500 });
    symbols.insert({ 'M', 1000 });
    
    vector<string> cases = { "IV", "IX", "XL", "XC", "CD", "CM" };
    vector<string>::iterator it;
    
    for(int i = 0; i < s.length(); i++) {
        string aux = string(1, s[i]) + s[i + 1];
        
        it = find(cases.begin(), cases.end(), aux);
        
        if(it != cases.end()) {
            sum += symbols[s[i + 1]] - symbols[s[i]];
            
            i++;
        } else {
            sum += symbols[s[i]];
        }
    }
    
    return sum;
}

int main (void) {
  string roman = "MCMXCIV";
  
  int sum = romanToInteger(roman);
  
  cout << sum << endl;
}