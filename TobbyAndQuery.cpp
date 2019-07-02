#include <iostream>
#include <map>

using namespace std;

int main(void){
	
	int elements;
	
	while(cin >> elements){
		int a[elements];
	
		for(int i = 0; i < elements; i++){
			cin >> a[i];
		}
		
		int cases;
		
		cin >> cases;
		
		while(cases--){
			int low, high;
		
			cin >> low >> high;
			
			low--;
			high--;
			
			map<int, int> frequencies;
			
			for(int j = low; j <= high; j++){
				frequencies[a[j]]++;
			}
			
			cout << frequencies.size() << endl;
		}
		
	}
	
	return 0;
}
