#include <iostream>
#include "Reverse.h"

Reverse::Reverse()
{}

int Reverse::reverseDigit(int value)
{

int Remainder = 0;
int Quotient = 0; 


	
if (value != 0) 
	{
		Remainder = value%10;
		Quotient = value/10;
		Reversed = Remainder + Reversed*10;
	
		reverseDigit(Quotient);
	}

return Reversed; 
	
	

}
std::string Reverse::reverseString(std::string letters)
{
		
	int length =  letters.length();
	ReversedWord = ReversedWord + letters[length-1];
	
	if (length == 1)
	{
		return ReversedWord;
	}

	letters.pop_back();
	return  reverseString(letters);
}
