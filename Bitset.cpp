#include <iostream>
#include <bitset>

using namespace std;

int main(void){
	
	int firstNumber, secondNumber;
	
	cin >> firstNumber;
	cin >> secondNumber;
	
	cout << endl << "Decimal sum = " << firstNumber + secondNumber << endl;
	
	bitset<8> firstAmount(firstNumber);
	bitset<8> secondAmount(secondNumber);
	
	cout << endl << firstNumber << " in Binary is " << firstAmount << endl;
	cout << endl << secondNumber << " in Binary is " << secondAmount << endl;
	
	cout << endl << firstAmount << " in Decimal is " << firstAmount.to_ulong() << endl;
	
	bitset<8> result(firstAmount.to_ulong() + secondAmount.to_ulong());
	
	cout << endl << "Binary sum = " << result << endl;
	
	cout << endl << firstAmount << " flipped is " << firstAmount.flip();
	cout << endl << secondAmount << " flipped is " << secondAmount.flip();
	
	int bits = firstAmount.size();
	int setBits = firstAmount.count();
	int unsetBits = bits - setBits;
	
	cout << endl << "Bits in " << firstAmount << " = " << bits << endl;
	
	cout << endl << "Set bits in " << firstAmount << " = " << setBits << endl;
	
	cout << endl << "Unset bits in " << firstAmount << " = " << unsetBits << endl;
	
	if(secondAmount.any() /*!secondAmount.none()*/){
		cout << endl << "In " << secondAmount << " there is at least a set bit" << endl;
		secondAmount.set();
		cout << endl << "Second bitset with all bits set: " << secondAmount << endl;
		secondAmount.reset();
		cout << endl << "Second bitset with all bits reset: " << secondAmount << endl;
	}
	
	bitset<4> number(20);
	
	cout << endl << number << endl;
	
	cout << endl << (number >>= 1) << endl;
	cout << endl << (number <<= 2) << endl;
	
	return 0;
}
