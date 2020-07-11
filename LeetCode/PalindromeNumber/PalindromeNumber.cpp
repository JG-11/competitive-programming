#include <iostream>

using namespace std;

long reverseNumber(int number) {
    long newNumber = 0;
    
    while(number > 0) {
        newNumber = newNumber * 10 + number % 10;
        
        number = number / 10;
    }
    
    return newNumber;
}

bool isPalindrome(int number) {
    if(number >= 0) {
        long copy = reverseNumber(number);
        
        if(copy == number) {
            return true;
        }
        
        return false;
    }
    
    return false;
}

int main (void) {
    int x = 124;
    
    bool ans = isPalindrome(x);
    
    cout << ans << endl;
    
    return 0;
}
