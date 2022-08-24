#include <iostream>
#include "EfficientTruckloads.h"
#include <vector>

std::vector<std::vector<int>> EfficientTruckloads::stored (10001,std::vector<int>(10001,0));

EfficientTruckloads::EfficientTruckloads()
{}

int EfficientTruckloads::numTrucks(int numcrates, int loadsize)
{
	char bi;
	// std::cout << "new "<< std::endl;

	int A = 0;
	int B = 0;
	

	if (numcrates < 0 || loadsize < 0)
	{
		return -1;
	}


	if (stored.at(numcrates).at(loadsize) == 0)
	{

		if ( numcrates > loadsize)
		{

	
				// std::cout << "numcrates: " << numcrates<< std::endl;
				if (numcrates%2 != 0)
			    {
				 	A = numcrates/2;
					B= numcrates/2 + 1;
					numTrucks(A, loadsize);
					numTrucks(B,loadsize);
					stored.at(numcrates).at(loadsize) =stored.at(A).at(loadsize)+stored.at(B).at(loadsize) ;


				}
				else 
				{
					A = numcrates/2;

					numTrucks(A, loadsize);
					
					stored.at(numcrates).at(loadsize) =2*stored.at(A).at(loadsize);



				}
				//std::cout << A << std::endl;
				//std::cout << B << std::endl;
				
				
				

			

		}
		else 
		{
			// std::cout << "add "<< std::endl;
			stored.at(numcrates).at(loadsize) = 1;
			acc = acc + 1;
			return acc;
		}
		
		
		
	}
	// std::cout << "preexisting "<< std::endl;
	
	return stored.at(numcrates).at(loadsize);
}


