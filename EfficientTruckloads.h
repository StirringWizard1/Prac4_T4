#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H


#include <iostream>
#include <vector>


class EfficientTruckloads
{
private: 
	static std::vector<std::vector<int>> stored;
	int acc = 0; 
public:  
	EfficientTruckloads();
	int numTrucks(int crates, int loadsize);

};
#endif