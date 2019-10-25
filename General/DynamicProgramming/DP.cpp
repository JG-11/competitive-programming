#include <iostream>

using namespace std;


//Example: Fibonacci number

/*	If we want to solve a problem by Dynamic Programming, there are typically
 * 	three steps we can take:
 * 	1. Recursion
 * 	2. Store (Memoize) -> intermediate results, to not repeat those computations
 * 	3. Bottom Up -> this approach if we don't like using recursion anymore
 */ 


//Recursive solution: O(2^N)
int fibRecursion(int n){
	if(n == 1 || n == 2){
		return 1;
	} else {
		return fibRecursion(n - 1) + fibRecursion(n - 2);
	}
}


//Memoized solution: O(N)
/*	If the recursive code has been written once, then memoization is just
 *	modifying the recursive program and storing the return values to avoid
 *	repetitive calls of functions which have been computed previously
 */
int fibMemoized(int n, int memo[]){
	if(memo[n] != 0){
		return memo[n];
	}
	
	if(n == 1 || n == 2){
		memo[n] = 1;
	} else {
		memo[n] = fibMemoized(n - 1, memo) + fibMemoized(n - 2, memo);
	}
	
	return memo[n];
}


//Bottom Up solution: O(N)
/*	Build the array in the previous approach (mostly filled from left to right)
 * 	from scratch, instead of building it recursively.
 */  
int fibBottomUp(int n){
	if(n == 1 || n == 2){
		return 1;
	}
	
	int bottomUp[n + 1];
	bottomUp[1] = 1;
	bottomUp[2] = 1;
	
	for(int i = 3; i < n + 1; i++){
		bottomUp[i] = bottomUp[i - 1] + bottomUp[i - 2];
	}
	
	return bottomUp[n];
}


int main(void){
	
	int n;
	
	cin >> n;
	
	int result;
	
	//Step 1
	result = fibRecursion(n);
	
	cout << "fib(" << n << ") = " << result << endl;
	
	
	//Step 2
	int memo[n + 1];
	
	memset(memo, 0, sizeof(memo));
	
	result = fibMemoized(n, memo);
	
	cout << "fib(" << n << ") = " << result << endl;
	
	
	//Step 3
	result = fibBottomUp(n);
	
	cout << "fib(" << n << ") = " << result << endl;
	
	
	//And we are done introducing Dynamic Programming
	
	return 0;
}
