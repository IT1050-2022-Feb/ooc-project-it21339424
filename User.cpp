#include <iostream>
#include "User.h"
#include <cstring>
using namespace std;

//defalt constructor
User::User()
{
	memberId = 0;
	strcpy( memberName , "" );
	strcpy( username , "" );
	strcpy( password , "" );	
}
//overloaded constructor
User::User( int MID, char MName[], char uName[], char pwd[] )
{
	memberId = MID;
	strcpy( memberName , "MName" );
	strcpy( username , "uName" );
	strcpy( password , "pwd" );
}
void User::setMemberdetails( int MID, char MName[] )
{
	
}
void User::setuserLogin( char uName[], char pwd[] )
{
	
}
void User::purchaseGames( int GID )
{
	
}
int User::getmemberID()
{
	return memberId;
}
char User::getmemberName()
{
	for(int i = 0 ; i < 20 ; i++ )
  {
    cout<< memberName[i];
  }
  return 0;
}
char User::getuserName()
{
	for(int i = 0 ; i < 30 ; i++ )
  {
    cout<< username[i];
  }
  return 0;
}
char User::getPassword()
{
	for(int i = 0 ; i < 10 ; i++ )
  {
    cout<< password[i];
  }
  return 0;
}
//Destructor
User::~User()
{
	cout<< "User Destructor called" << endl;
}