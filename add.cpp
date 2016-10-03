/*

The MIT License (MIT)

Copyright (c) 2016 SirJosh3917

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#include <iostream>

using namespace std;

int main()
{
	while(true) {
		int wholenumber_1 = 0;
		int wholenumber_2 = 0;
		int numerator_1 = 0;
		int numerator_2 = 0;
		int denominator_1 = 0;
		int denominator_2 = 0;
	
		cout << "Fraction Adder" << endl;
	
		cout << "Wholenumber 1" << endl;
		cin >> wholenumber_1;
	
		cout << "Numerator 1:" << endl;
		cin >> numerator_1;
		
		cout << "Denominator 1:" << endl;
		cin >> denominator_1;
	
		cout << "Wholenumber 2" << endl;
		cin >> wholenumber_2;
	
		cout << "Numerator 2:" << endl;
		cin >> numerator_2;
		
		cout << "Denominator 2:" << endl;
		cin >> denominator_2;
		
		cout << "Calculating results..." << endl;
		
		numerator_1 = numerator_1 + wholenumber_1 * denominator_1;
		numerator_2 = numerator_2 + wholenumber_2 * denominator_2;
		
		int numerator_3 = 0;
		int denominator_3 = 0;
		
		numerator_3 = ( numerator_1 * denominator_2 ) + ( numerator_2 * denominator_1 );
		denominator_3 = ( denominator_1 * denominator_2 );
		
		cout << endl <<
		" " << numerator_3 << endl <<
		" -----" << endl <<
		" " << denominator_3 << endl;
	}
	return 0;
}