#include <iostream>

using namespace std;


int main(void){
	
	int firstHour, secondHour, firstMinutes, secondMinutes;
	
	int totalMinutesFirst = 0, totalMinutesSecond = 0;
	
	scanf("%d:%d", &firstHour, &firstMinutes);
	scanf("%d:%d", &secondHour, &secondMinutes);
	
	firstHour *= 60;
	firstHour += firstMinutes;
	totalMinutesFirst = firstHour;
	
	secondHour *= 60;
	secondHour += secondMinutes;
	totalMinutesSecond = secondHour;
	
	//cout << endl << totalMinutesFirst << endl;
	//cout << endl << totalMinutesSecond << endl;
	
	int mid = (totalMinutesFirst + totalMinutesSecond) / 2;
	
	int hours = mid / 60;
	int minutes = mid % 60;
	
	if(hours < 10 && minutes >= 10){
		cout << "0" << hours << ":" << minutes << endl;
	} else if(hours < 10 && minutes < 10){
		cout << "0" << hours << ":" << "0" << minutes << endl;
	} else if(hours >= 10 && minutes < 10){
		cout << hours << ":" << "0" << minutes << endl;
	} else{
		cout << hours << ":" << minutes << endl; 
	}
	
	return 0;
}
