#include <iostream>
#define MAXN 1000

using namespace std;

int memo[1005][1005];

int N;

int m[MAXN][MAXN];

int i, j;

int sum = 0;

int dp(int i, int j){
	if(i == N && j == N){
		return m[i][j];
	}
	
	if(memo[i][j] != 0){
		return memo[i][j];
	}
	
	int ans = LONG_MAX;
	
	if(i + 1 <= N){
		ans = min(ans, dp(i + 1, j));
	}
	
	if(j + 1 <= N){
		ans = min(ans, dp(i, j + 1));
	}
	
	memo[i][j] = ans + m[i][j];
	
	return memo[i][j];
}

int main(void){
	
	cin >> N;
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			cin >> m[i][j];
		}
	}
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			s
		}
	}
	
	cout << sum;
	
	return 0;
}
