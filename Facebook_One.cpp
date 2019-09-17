#include <iostream>
#include <string>

using namespace std;

string number;

int answer;

void rec(int pos, string result){
	
	if(pos == number.length()){
		cout << endl << result << endl;
		
		answer++;
		
		return;
	}
	
	char firstLetter = number[pos] - '0' - 1 + 'a';
	
	rec(pos + 1, result + firstLetter);
	
	if(pos + 1 < number.length()){
		
		string concat;
		
		concat += number[pos];
		
		concat += number[pos + 1];
		
		if(stoi(concat) <= 26){
			char secondLetter = stoi(concat) - 1 + 'a';
			
			rec(pos + 2, result + secondLetter);
		}
		
	}
		
}

int main(void){
	
	cin >> number;
	
	rec(0, "");
	
	cout << endl << answer << endl;

	return 0;
}
