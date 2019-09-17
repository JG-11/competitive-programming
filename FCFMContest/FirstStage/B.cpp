#include <iostream>

using namespace std;

int main(void){
	
	int a, b;
	
	cin >> a >> b;
	
	for(int i = a; i <= b; i++){
		if(i % 3 == 0 && i % 5 == 0){
			cout << "BuzzFizz";
		} else if(i % 3 == 0){
			cout << "Buzz";
		} else if(i % 5 == 0){
			cout << "Fizz";
		} else {
			cout << i;
		}

		cout << endl;
	}
	
	return 0;
}
