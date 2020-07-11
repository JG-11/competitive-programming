#include <iostream>

using namespace std;

int arrangeCoins(int n) {
    int i = 1;
    
    while(n >= i) {
        n -= i;
        
        i++;
    }
    
    return i - 1;
}

int main(void) {
    int n = 15;
    
    cout << arrangeCoins(n) << endl;

    return 0;   
}
