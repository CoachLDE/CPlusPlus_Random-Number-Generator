/************************************************************************************************
	Name: CoachLDE
	Date: 10.24.2023
	Purpose: In this program I will create a Random Number Generator.  Being that this is a 
			 computer program, it will never be truly random, but it will be a simulation of one
*************************************************************************************************/

#include <iostream>
#include <random>


using namespace std;

int main()
{
	random_device rd;		//This is the Random Engine
	uniform_int_distribution<int> dist(1, 10);		//This is the random distribution between 1 and 10



	for (int i = 0; i < 10; i++)
	{
		int x = dist(rd);		//The distribution with the random engine
		int y = dist(rd);

		cout << "These are the random coordinates: (" << x << ", " << y << ")" << endl;
	}

	return 0;
}