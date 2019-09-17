#include <iostream>
#include <vector>

using namespace std;


int main(void){
	
	vector<int> v = {1, 2, 3, 4, 5};
	
	v.push_back(6);
	
	if(v.empty() == false){
		cout << endl << "Vector is not empty" << endl;
		
		cout << endl << "Size: " << v.size() << endl;
		
		v.pop_back();
		
		cout << endl << "Size: " << v.size() << endl;
		
		v.erase(v.begin());
		
		cout << endl << "Size: " << v.size() << endl;
		
		v.emplace(v.begin(), 14);
		v.emplace(v.end(), 17);
		
		cout << endl << "Size: " << v.size() << endl;
		
		v.emplace(v.begin() + 2, 17);
		
		cout << endl << "Size: " << v.size() << endl;
		
		sort(v.begin(), v.end(), greater<int>());
		
		v.insert(v.end(), 1, 4);
		
		cout << endl << "Vector 1" << endl;
		
		for(auto i : v){
			cout << i << " ";
		}
		
		vector<int> v2;
		v2.push_back(3);
		v2.push_back(4);
		v2.push_back(6);
		v2.push_back(12);
		v2.push_back(3);
		v2.push_back(4);
		v2.push_back(6);
		
		cout << endl << "Vector 2" << endl;
		
		for(auto x : v2){
			cout << x << " ";
		}
		
		v.swap(v2);
		
		cout << endl << endl << "Vectores intercambiados" << endl;
		
		for(auto x : v){
			cout << x << " ";
		}
		
		cout << endl;
		
		for(auto x : v2){
			cout << x << " ";
		}
		
		vector<string> names;
		
		names.push_back("Genaro");
		names.push_back("David");
		names.push_back("Ivan");
		
		sort(names.begin(), names.end());
		
		for(auto i : names){
			cout << i << " ";
		}
		
		sort(names.begin(), names.end(), greater<string>());
		
		cout << endl << endl;
		
		for(auto i : names){
			cout << i << endl;
		}

	} else {
		cout << endl << "Vector is empty" << endl;
	}
	
	return 0;
}	
