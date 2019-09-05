#include <iostream>

using namespace std;

int getSum(int a, int b){
	int carry;
        
    while(b != 0){
		carry = a & b;
		
		a = a ^ b;
            
        b = carry << 1;
    }
        
    //a = 2 = 0010
    //b = 3 = 0011
        
    //carry = a & b = 0010
    //a = a ^ b = 0001
    //b = carry << 1 = 0100
        
    //a = 0001
    //b = 0100
        
    //carry = a & b = 0000
    //a = a ^ b = 0101
    //b = 0000
        
    //c = 5 = 0101
    
    return a;
}
        
int main(void){
	
	int a, b;
	
	cin >> a >> b;
	
	cout << getSum(a, b);

	return 0;
}
