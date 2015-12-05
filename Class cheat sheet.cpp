// Weekly coding 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using std::cout;

int main()
{
	class Pokemon
	{
		 // Variables
	public:
	private:
		std::string name;
		std::string type;
		int health;
		int damage;

		// Functions
	public:
		Pokemon(); // constructor
		~Pokemon(); // destructor

		// Getters and setters
		std::string getName();
		std::string setName(std::string value);
		std::string getType();
		std::string setType(std::string value);
		int			getHealth();
		int			setHealth(int value);
		int			getDamage();
		int			setDamage(int value);

	private:
		float typeModifierOnDamage(std::string otherType);






		// Non-default constructor

		Pokemon(int inHealth, int inDamage, std::string inName, std::string inType)
		{
			health = inHealth;
			damage = inDamage;
			name = inName;
			type = inType;
		}

		// Default destructor

		virtual ~Pokemon()
		{
			// Cleans up after Pokemon is destroyed
			// If NEW is used in the CONSTRUCTOR then DELETE must be used here
		}

	};
}

