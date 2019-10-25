#include <iostream>
#include <vector>

using namespace std;


int bestTime(vector<int> &prices){
	int minPrice = prices[0];
	
	int maxProfit = 0;
	
	for(int i = 1; i < prices.size(); i++){
		if(prices[i] < minPrice){
			minPrice = prices[i];
		} else if(prices[i] - minPrice > maxProfit){
			maxProfit = prices[i] - minPrice;
		}
	}
	
	return maxProfit;
}

int main(void){
	
	vector<int> prices = {7, 1, 5, 3, 6, 4};
	
	if(prices.size() == 0){
		cout << 0 << endl;
	} else {
		int maxProfit = bestTime(prices);
		
		cout << maxProfit << endl;
	}
	
	return 0;
}
