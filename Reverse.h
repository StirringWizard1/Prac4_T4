#ifndef REVERSE_H
#define REVERSE_H

#include <iostream>

class Reverse 
{
private:
	int Reversed = 0;
	std::string ReversedWord;

public: 
	Reverse();
	int reverseDigit(int value);
	std::string reverseString(std::string Letters);
};
#endif