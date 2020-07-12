#include <iostream>
#include <vector>

using namespace std;

int coinChange(vector<int>& coins, int amount) {
    int max = amount + 1;
    
    int dp[max];
    
    fill_n(dp, max, max);
    
    dp[0] = 0;
    
    for(int i = 1; i < max; i++) {
        for(int j = 0; j < coins.size(); j++) {
            if(coins[j] <= i) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    
    if(dp[amount] == max) {
        return -1;
    }
    
    return dp[amount];
}

int main(void) {
    vector<int> coins = { 1, 2, 5 };
    
    int amount = 11;
    
    cout << coinChange(coins, amount) << endl;
    
    return 0;   
}