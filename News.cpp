#include <iostream>
#include "News.h"
#include <cstring>
using namespace std;

News::News()
{
	newsID = 0;
	strcpy( newsName , "" );
}
News::News( int NID , char Nname[] )
{
	newsID = 0;
	strcpy( newsName , "Nname" );
}
void News::setNewsdetails( int NID , char Nname[] )
{
	
}
void News::editNews( int NID , char Nname[] )
{
	
}
void News::viewNews( int NID , char Nname[] )
{
	
}
News::~News()
{
	cout<<"News Destructor called" << endl;
}