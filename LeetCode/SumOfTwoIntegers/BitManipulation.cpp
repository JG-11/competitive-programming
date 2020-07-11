#include <iostream>

using namespace std;

int getSum(int a, int b) {
    while(b != 0) {
        int carry = a & b;
        
        a = a ^ b;
        
        b = (unsigned)carry << 1; //unsigned to handle error that happens in some IDEs by left shifting of negative values
    }
    
    return a;
}

int main(void) {
    int a = -2, b = -3;
    
    cout << getSum(a, b) << endl;
    
    return 0;
}