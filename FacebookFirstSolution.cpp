#include <iostream>
#include <string>

using namespace std;


string number;
int answer;


void rec(int pos, string result){
	if(pos == number.length()){
		cout << result << endl;
		
		answer++;
		
		return;
	}
	
	char letter = (number[pos] - '0' - 1) + 'a';
	
	rec(pos + 1, result + letter);	
	
	if(pos + 1 < number.length()){
		//I code the group
		string concat; 
		
		concat += number[pos];
		
		concat += number[pos + 1];
		
		int compare = stoi(concat);
		
		if(compare <= 26){
			char newLetter = compare - 1 + 'a';
			
			rec(pos + 2, result + newLetter);
		}
	}
	
}

int main(void){
	
	cin >> number;
	
	rec(0, "");
	
	cout << endl << answer;
	
	return 0;
}
