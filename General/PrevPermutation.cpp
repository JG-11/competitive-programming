#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	
	int n;
	
	cin >> n;
	
	int a[n];
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sort(a, a + n);
	reverse(a, a + n);
	
	int res = 0;
	
	do{
		res += 1;
	}while(prev_permutation(a, a + n));
	
	cout << res;
	
	return 0;
}
