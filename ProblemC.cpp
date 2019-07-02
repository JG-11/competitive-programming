#include <iostream>

using namespace std;

int main(void){

    int value;
    
    while(cin >> value && value != 42){
		cout << value << endl;
	}
    
    return 0;
}
