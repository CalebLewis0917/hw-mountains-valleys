#include <iostream>
#include "functions.h"

using std::cout, std::cin, std::endl;

int main() {
	int a = 0;
	int b = 0;
	bool valid = false;
	while(!valid){
		// (student): print prompt for input
		cout << "Enter numbers 10 <= a <= b < 10000: ";
		// (student): read the numbers from standard input
		cin >> a;
		cin >> b;
		// (student): validate input (and reprompt on invalid input)
		if(is_valid_range(a,b)){
			valid = true;
		}	
		else{
			cout << "Invalid Input" << endl;
		}	
	}
	
	// (student): compute and display solution
	count_valid_mv_numbers(a,b);

	return 0;
}