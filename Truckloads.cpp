#include <iostream>
#include "Truckloads.h"

Truckloads::Truckloads()
{}

int Truckloads::numTrucks(int numcrates, int loadsize)
{
	int A = 0;
	int B = 0;
	if (loadsize <= 0 ||  numcrates <= 0)
		{
			std::cout << "HI"<< std::endl;
			return 0;

		}

	else if (numcrates > loadsize)
	{
		if (numcrates%2 != 0)
		{
			A = numcrates/2;
			B= numcrates/2 + 1;
		}
		else 
		{
			A = numcrates/2;
			B = numcrates/2;
		}
		


			return numTrucks(A, loadsize) + numTrucks(B, loadsize); 

	}
	

	
	return 1;  

}