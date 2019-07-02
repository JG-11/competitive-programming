#include <iostream>
#include <vector>

using namespace std;

int main(void){
	
	int a1[] = {1, -4, 5, 6, -8, 9};
	int a2[] = {1, -4, 5, 6, -8, 6};
	
	int s = sizeof(a1) / sizeof(a1[0]);
	
	cout << "a1[] = {1, -4, 5, 6, -8, 9}" << endl;
	cout << "a2[] = {1, -4, 5, 6, -8, 6}" << endl;
	
	if(equal(a1, a1 + s, a2)){
		cout << "Both arrays have the same values" << endl;
	} else {
		cout << "Both arrays are different" << endl;
	}
	
	
	vector<int> firstVector;
	
	vector<int> secondVector;
	
	int value;
	
	cout << endl << "Type the elements of firstVector" << endl;
	
	while(cin >> value && value != 3){
		firstVector.emplace_back(value);
	}
	
	cout << endl << "Type the elements of secondVector" << endl;
	
	while(cin >> value && value != 3){
		secondVector.emplace_back(value);
	}
	
	cout << endl << "firstVector elements: ";
	
	for(int x : firstVector){
		cout << x << " ";
	}
	
	cout << endl << "secondVector elements: ";
	
	for(int y : secondVector){
		cout << y << " ";
	}
	
	if(equal(firstVector.begin(), firstVector.end(), secondVector.begin())){
		cout << endl << "Both vectors are equal" << endl;
	} else {
		cout << endl << "Both vectors are different" << endl;
	}
	
	return 0;
}
