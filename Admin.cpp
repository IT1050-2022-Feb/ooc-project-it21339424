#include <iostream>
#include "Admin.h"
#include <cstring>
using namespace std;

//defalt constructor
Admin::Admin()
{
	adminID = 0;
	strcpy( name , "" );
}
//overloaded constructor
Admin::Admin( int AID , char name[] )
{
	adminID = AID;
	strcpy( name , "name");
}
void Admin::setAdmindetails( int AID , char name[] )
{
	
}
//Destructor
Admin::~Admin()
{
	cout<<"Admin Destructor called" << endl;
}