// You are given a queue of work items.  
// [1, 2, 3, 3, 4, 4, 4, 5]
// Its given:
// 1) Each work item has a unique id
// 2) Queue has fixed size. For given example n=8
// 3) Can contain duplicate work items 
// 4) Items in the queue are sorted in increasing order, by ID
// 5) Queue is implemented as an array

// Implement a method to modify this queue, before it's processed, such that same work item is not processed twice and return number of items that will be processed (result).
// For the specified example, return result = 5.
// We don't care what's in the queue after 'result' item (excluding it)

// input: [1, 2, 3, 3, 4, 4, 4, 5]
// output: 5 // [1, 2, 3, 4, 5, x, x,x]

// input [1, 2, 3, 4, 4, 5]
// output: 5 // [1, 2, 3, 4, 5, 3]


// [1, 2, 3, 4, 4, 4, 4, 5] its name is a
 

// for loop 
// a[1] == a[2] false
// a[2] == a[3] false
// a[3] == a[4] true

// int i = 4

// int j = i;

// int cont

// while loop 
// i++ 
// cont++
// a[i] == a[i + 1]
  
//   break
  
// [1, 2, 3, 4, x, x, x, 5]

// a[j] = a[i]

// n - 1
// for loop from n - 1 to n > the amount of my unique elements 

// [1, 2, 3, 4, 5, 0, 0, 0]



#include <bits/stdc++.h>

using namespace std;

int n;

int a[n];

int duplicatesAmount = 0;

int flag; //it is gonna store where I stayed

int main(void){
  
  cin >> n;
  
  int i;
  
  for(i = 0; i < n; i++){
    cin >> a[i];
  }
  
  
  for(i = 0; < n; i++){
    flag = i;
    while(a[i] == a[i + 1]){
      i++;
      duplicatesAmount += 1;
      if(a[i] != a[i + 1]{
         break; 
      }
    } 
    a[flag] = a[i];
  }
  
  return 0;
}



