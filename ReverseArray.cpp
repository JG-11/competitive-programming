#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    
    int a[] = {4, 5, 6, 7}; 
    reverse(begin(a), end(a)); 
    
    for(int i = 0; i < 4; i++){
        cout << a[i] << " ";
    }
    return 0;
}

