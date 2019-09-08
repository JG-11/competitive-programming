#include <iostream>
#include <vector>

using namespace std;


int main(void){
	
	//vector<char> s = {'h','o','l','a',' ','m','u','n','d','o',' ','s','o','y',' ','G','e','n','a','r','o'};
	//vector<char> s = {'h','o','l','a',' ','s','o','y'};
	//vector<char> s = {'h','o','l','a'};
	vector<char> s = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
	
	vector<string> words;
	
	string aux = "";
	
	int i;
	
	for(i = 0; i < s.size(); i++){
		if(s[i] == ' '){
			words.emplace_back(aux);
			aux = "";
			continue;
		}
		
		if(i == s.size() - 1){
			aux += s[i];
			words.emplace_back(aux);
			aux = "";
			break;
		}
		
		aux += s[i];
	}
	
	int l = s.size() - 1, j;
	
	for(auto w : words){
		for(j = w.length() - 1; j >= 0; j--){
			s[l] = w[j];
			l--;
		}
		s[l--] = ' ';
	}
	
	int k;
	
	for(k = 0; k < s.size() - 1; k++){
		cout << s[k] << " ";
	}
	
	cout << s[k];
	
	return 0;
}
