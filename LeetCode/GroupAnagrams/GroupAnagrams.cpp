#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(void){
	
	string strs[] = {"eat", "tea", "bat", "ate", "tan", "nat"};
	
	map<string, vector<string>> aux;
	
	int count[26] = {0};
	
	for(auto s : strs){
		for(int i = 0; i < s.length(); i++){
			count[s[i] - 'a']++;
		}
		
		string b = "";
		for(int i = 0; i < 26; i++){
			b += "#";
			b += to_string(count[i]);
			
			count[i] = 0;
		}
		
		aux[b].emplace_back(s); 
	}
	
	vector<vector<string>> res;
	
	for(auto i : aux){
		res.emplace_back();
		for(auto j : i.second){
			res.back().emplace_back(j);
		}
	}
		
	for(auto l : res){
		for(auto c : l){
			cout << c << " ";	
		}
		cout << endl;
	}
	
	return 0;
}
