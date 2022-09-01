#include <iostream>
#include "functions.h"

using std::cout, std::endl;

bool is_valid_range(int a, int b) {
	if(a>=10 && b<10000 && a<=b){
		return true;
	}
	return false;
}

char classify_mv_range_type(int number) {
	// (student): return 'M' if number has /\/\... pattern,
	// return 'V' if number has \/\/ pattern, and return 'N' otherwise
	char tempChar = 'L';
	int tempNum = number;
	int lastValue = tempNum%10;
	tempNum /= 10;
	int currValue = 0;
		while(tempNum != 0){
			currValue = tempNum%10;
			if(currValue<lastValue && tempChar!='M'){
				tempChar = 'M';
			}
			else if(currValue>lastValue && tempChar!='V'){
				tempChar = 'V';
			}
			else{
				return 'N';
			}
			lastValue = currValue;
			tempNum /= 10;	
		}
		return tempChar;
	return 'L';
}

void count_valid_mv_numbers(int a, int b) {
	// (student): count the number of valid mountain ranges and valley
	// ranges in the range [a, b] and print out to console using the format
	// in Requirement 4 of the homework prompt

	int mCount = 0;
	int vCount = 0;
	char checker;
	for(int i = a; i <= b; i++){
		checker = classify_mv_range_type(i);
		if(checker=='M'){
			mCount++;
		}
		else if(checker=='V'){
			vCount++;
		}
	}

	cout << "There are " << mCount << " mountain ranges and " << vCount << " valley ranges between " << a << " and " << b << "." << endl; 

}