#include <iostream>
#include <map>

using namespace std;

int main(void){
    
    map<string, int> numbers;
    
    string name = "";
    
    while(name != "hola"){
		cin >> name;
        numbers[name]++;
    }
    
    map<string, int>::iterator itr;
    
    for(itr = numbers.begin(); itr != numbers.end(); itr++){
        cout << itr->first << " repeats " << itr->second << endl;
    }
    
    return 0;
}
