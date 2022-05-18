#include <iostream>
#include "Guest.h"
using namespace std;

Guest::Guest()
{
	guestID = 0;	
}
Guest::Guest(int GID)
{
	guestID = GID;
}
void Guest::registerUser()
{
	
}
Guest::~Guest()
{
	cout<<"Guest Destructor called" << endl;
}
