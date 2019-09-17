#include <iostream>
#include <vector>

using namespace std;

int main(void){
	
	int firstNumber, secondNumber;
	
	cin >> firstNumber;
	cin >> secondNumber;
	
	vector<int> numbers;
	
	numbers.emplace_back(firstNumber);
	numbers.emplace_back(secondNumber);
	
	int i = 1, result = 0, sum = 0, add;
	
	do{
		sum = numbers[i] + numbers[i - 1];
		
		string compare = to_string(sum);
		
		if(compare.length() == 2){
			add = stoi(compare);
			add -= 10;
		} else {
			add = stoi(compare);
		}
		
		numbers.emplace_back(add);
		
		i++;
		
		result += 1;
		
	}while(numbers[i] != secondNumber || numbers[i - 1] != firstNumber);
	
	for(auto x : numbers){
		cout << x << " ";
	}
	
	cout << endl << result;
	
	return 0;
}
