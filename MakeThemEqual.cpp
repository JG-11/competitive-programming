#include <bits/stdc++.h>


using namespace std;

int main(void){
	
	int n;
	
	cin >> n;
	
	int a[n];
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sort(a, a + n);
	
	set<int> b;
	
	for(int i = 0; i < n; i++){
		b.insert(a[i]);
	}

	int res, mid;
	
	int firstValue = a[0];
	
	int lastValue = a[n - 1];
	
	mid = (firstValue + lastValue) / 2;
	
	if(b.size() == 1){
		res = 0;
	} else if(b.size() == 2){
		if(firstValue % 2 == 0 && lastValue % 2 == 0){
			res = lastValue - mid;
		} else if(firstValue % 2 != 0 && lastValue % 2 != 0){
			res = lastValue - mid;
		} else {
			res = lastValue - firstValue;
		}
	} else if(b.size() == 3){
		if(firstValue % 2 == 0 && lastValue % 2 == 0){
			if(b.count(mid)){
				res = lastValue - mid;
			} else {
				res = -1;
			}
		} else if(firstValue % 2 != 0 && lastValue % 2 != 0){
			if(b.count(mid)){
				res = lastValue - mid;
			} else {
				res = -1;
			}
		} else {
			res = -1;
		}
	} else {
		res = -1;
	}
	
	cout << res;
	
	return 0;
}
