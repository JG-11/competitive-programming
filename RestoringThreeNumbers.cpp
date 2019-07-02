#include <bits/stdc++.h>

using namespace std;

int main(void){
	
	int sums[4];
	
	for(int i = 0; i < 4; i++){
		cin >> sums[i];
	}
	
	int size = sizeof(sums) / sizeof(sums[0]);
	
	sort(sums, sums + size);
	
	int partial = sums[3] - sums[0] - sums[1];
	
	int a = -1 * partial;
	
	int b = sums[0] - a;
	
	int c = sums[1] - a;
	
	cout << a << " " << b << " " << c;
	
	return 0;
}
