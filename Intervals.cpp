#include <iostream> 

using namespace std;
  
int main(void) { 
	
	int T, s, e, flag, i, j;
	
	cin >> T;
	
	while(T--){
		cin >> s >> e;
		
		for(i = s; i <= e; i++){
			if(i == 1){
				continue;
			}	
			
			flag = 1;
			
			for(j = 2; j <= i / 2; j++){
				if(i % j == 0){
					flag = 0;
					break;
				}
			}
			
			if(flag == 1){
				cout << i << endl;
			}
		}
	}

    return 0; 
} 
