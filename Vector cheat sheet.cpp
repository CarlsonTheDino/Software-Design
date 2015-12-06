#include "stdafx.h"
#include <iostream>
using std::cout;
using std::string;
#include <vector>
#include "Vector cheat sheet.h"
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


	// Create a new vector and add to it, see current size and capacity

	vector<int> myVector;
	myVector.reserve(7);
	cout << myVector.size() << endl;
	cout << myVector.capacity() << endl;
	myVector.push_back(1234);
}

.push_back() // to add
.pop_back()  // to remove
			 // these only happen at the end/back of the containter (vector)
			 // tied to the re-sizing, as it can have spare capacity at the end which allows for easy insertion (.push_back())
			 // easy means cheap
.erase()     // expensive, order needs reshuffling
.insert()    // also expensive

