#include <iostream>

/*
 * Batch problems: you read some data from standard input, do something with
 * the data in order to find the desired answer, and then print the answer
 * to standard output.
 * 
 * 
 * Interactive problems: in this type of problems you should communicate with
 * a special program written by the problem setter(s) called the interactor.
 * Reading and writing data can alternate.
 * 
 */ 

using namespace std;


/*	Problem description: you are given an array of N integers. After reading each
 * 	element of the array, output the sum of all the elements read so far.
 */
 
 
/*	Reading data is no different than in batch problems, but writing data requires
 *  two thigs:
 * 	1. End your output with a newline character: \n (ASCII code 10)
 *  2. You need to flush the output stream after printing the data
 */

int main(void){
	
	int n;
	
	cin >> n;
	
	long long sum = 0;
	
	int val;
	
	for(int i = 0; i < n; i++){
		cin >> val;
		
		sum += val;
		
		cout << sum << endl;
		
		cout.flush();
	}
	
	
	return 0;
}
