/*
This class creates client objects that store information about a given personal training client.
*/

#pragma once

#include <string>

class client
{
public:
	client();									// Default constructor
	client(std::string);						// Constructor with only one string for a name and no age
	client(std::string, std::string);			// Constructor for full name and no age
	client(std::string, std::string, int);		// Constructor for full name and agehahahahahaha
	~client();

private:
	std::string firstName;						// Client's first name
	std::string lastName;						// Client's last name
	int age;									// Client's age
	std::string startDate;						// Date that the client started training
};
