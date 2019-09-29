#include <iostream>
#include <sstream>


using namespace std;


int main(void){
	
	string str;
	
	getline(cin, str);
	
	if(str.length() == 0){
		cout << 0 << endl;
		return 0;
    }
        
    stringstream d(str);
        
    string aux;
        
    if(d >> aux){
		char eval = aux[0];
            
        if(eval != '+'){
			if(eval != '-'){
				if(!isdigit(eval)){
					cout << 0 << endl;
					return 0;
				}
            }     
        }
            
		if(eval == '-'){
			if(!isdigit(aux[1])){
				cout << 0 << endl;
				return 0;
			}
		}
            
        if(eval == '+'){
			if(!isdigit(aux[1])){
				cout << 0 << endl;
				return 0;
			}
        }
            
        int m = 1, i = 0;
            
        if(eval == '-'){
			m = -1;
			i = 1;
		} else if(eval == '+'){
			i = 1;
		}
            
        long number = 0;
                
        while(isdigit(aux[i])){
			number = number * 10 + (aux[i] - '0');
                
            if(number * m > INT_MAX){
				cout << INT_MAX << endl;
				return 0;
			} else if(number * m < INT_MIN){
				cout << INT_MIN << endl;
				return 0;
            } 
                
            i++;
        }
        
        cout << number * m << endl;
	
	} else {
		cout << 0 << endl;
	}
 
	return 0;
}
