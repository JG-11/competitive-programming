#include <iostream>
#include <vector>

using namespace std;


int main(void){
	
	vector<string> answer;
	
	int n;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		if(i % 3 == 0 && i % 5 == 0){
			answer.emplace_back("FizzBuzz");
		} else if(i % 3 == 0){
			answer.emplace_back("Fizz");
		} else if(i % 5 == 0){
			answer.emplace_back("Buzz");
		} else {
			answer.emplace_back(to_string(i));
		}
	}
	
	for(auto x : answer){
		cout << x << endl;
	}
	
	return 0;
}
