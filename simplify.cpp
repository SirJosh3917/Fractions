/*

The MIT License (MIT)

Copyright (c) 2016 SirJosh3917

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	while(true) {
	int whole_number = 0;
	int numerator_1 = 0;
	int numerator_2 = 0;
	int denominator_1 = 0;
	int denominator_2 = 0;
	
	cout << "Fraction Simplifier" << endl;
	
	cout << "WholeNumber:" << endl;
	cin >> whole_number;
	
	cout << "Numerator 1:" << endl;
	cin >> numerator_1;
	
	cout << "Denominator 1:" << endl;
	cin >> denominator_1;
	
	cout << "Simplifying..." << endl;
	
	numerator_1 = numerator_1 + ( whole_number * denominator_1 );
	whole_number = 0;
	
	if ( numerator_1 == denominator_1 ) {
		numerator_1 = 1;
		denominator_1 = 1;
	} else {
		if( numerator_1 > denominator_1 ) {
			
			//Get rid of the whole numbers
			
			whole_number = ( numerator_1 - ( numerator_1 % denominator_1 ) ) / denominator_1;
			numerator_1 = numerator_1 % denominator_1;
			
		}
		
		bool keepGoing = true;
		while(keepGoing) {
			keepGoing = false;
		for( int i = 2; i < denominator_1; i++ ) {
			if( denominator_1 % i == 0 && numerator_1 % i == 0 ) {
				denominator_1 = denominator_1 / i;
				numerator_1 = numerator_1 / i;
				keepGoing = true;
			}
		}
		}
	}
	cout << "  " << numerator_1 << endl <<
		" " << whole_number << "-----" << endl <<
		"  " << denominator_1 << endl;
	}
	
	return 0;
}