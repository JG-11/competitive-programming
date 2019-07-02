#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(void){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0
	
	
	int numberDormitories, numberLetters, numberToBeFound, upperLimit;
	
	int input;
	
	cin >> numberDormitories >> numberLetters;
	
	int dormitories[numberDormitories], letters[numberLetters];
	
	vector<pair<int, pair<int, int>>> numbers;
	
	for(int i = 0; i < numberDormitories; i++){
		cin >> input;
		dormitories[i] = input;
	}
	
	for(int j = 0; j < numberLetters; j++){
		cin >> input;
		letters[j] = input;
	}
	
	for(int i = 0; i < numberDormitories; i++){
		if(i == 0){
			numbers.push_back({i + 1, {1, dormitories[i]}});
			upperLimit = dormitories[0];
		} else {
			numbers.push_back({i + 1, {upperLimit + 1, upperLimit + dormitories[i]}});
			upperLimit += dormitories[i];
		}
	}
	
	for(int j = 0; j < numberLetters; j++){
		numberToBeFound = letters[j];
		
		for(auto x : numbers){
			if((x.second.first <= numberToBeFound) && (x.second.second >= numberToBeFound)){
				if(x.first == 1){
					cout << endl << x.first << " " << numberToBeFound << endl;
				} else {
					cout << endl << x.first << " " << numberToBeFound - (x.second.first - 1) << endl;
				}
			}
		}	
			
	}

	return 0;
}
