#include <iostream>
#include <set>

using namespace std;


int main(void){
	
	int n, t;
	
	while(cin >> n){
		
		cin >> T;
		
		int a[n];
		
		set<int> aux;
		
		for(int i = 0; i < n; i++){
			cin >> a[i];
			
			aux.insert(a[i]);
		}
		
		sort(a, a + n);
		
		int i = 0;
		
		while(i <= n){
			int res = 0;
			
			int sum = 0;
			
			int value = a[i];
			
			sum = value;
		
			int cont = 0;
			
			while(cont < n && sum != t){
				int f = t - sum;
				
				if(aux.count(f)){
					sum += f;
				} else {
					int i = 1;
					int nF = f -= i; 
					while(!aux.count(nF)){
						i++;
					}
					sum += nF;
				}
				
				if(sum == t){
					res += 1;
				}
				
				cont++;	
			}
			
			cout << res;
			
			i++;
		}
	}
	
	return 0;
}
