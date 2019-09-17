#include <iostream>
#include <sstream>

using namespace std;

int main(void){
	
	stringstream newNumber("10013213");
	
	int value = 0;
	
	newNumber >> value;
	
	cout << "Value: " << value << endl;
	
	string amount = "34545646";
	
	int newAmount = stoi(amount);
	
	cout << endl << "Int: " << newAmount << endl;
	
	cout << endl << "To String: " << to_string(newAmount) << endl;
	
	stringstream floatValue("12355.4");
	
	float floatNumber = 0;
	
	floatValue >> floatNumber;
	
	cout << endl << endl << "Float: " << floatNumber << endl;
	
	float newFloatValue = atof("1234.45");
	
	cout << endl << newFloatValue << endl;
	
	cout << "Hola Genaro, tu saldo es de " << to_string(newFloatValue) << endl;

	return 0;
}
