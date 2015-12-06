#include "stdafx.h"
#include <iostream>
using std::cout;
using std::string;
#include <vector>
namespace STL

{
	struct vector
	{
		int x, y, z;
	};

}




int main(int argc, char *argv[])
{
	// Create a new vector from the STL namespace
	STL::vector vec1;
	vec1.x = 5;


	// Create a new vector from the std namespace
	std::vector <int> vec2;
	vec2.push_back(5);
}