#include <iostream>
#include "Payment.h"
#include <cstring>
using namespace std;

//defalt constructor
Payment::Payment()
{
	paymentID = 0;
	strcpy( paymentType , "" );
	paymentAmount = 0;
}
//overloaded constructor
Payment::Payment( int payID , char payType[], double payAmount )
{
	paymentID = payID;
	strcpy( paymentType , "payType" );
	paymentAmount = payAmount;
}
void Payment::setPaymentDetails( int payID , char payType[] )
{
	
}
void Payment::setPaymentAmount( double payAmount )
{
	
}
int Payment::getPaymentID()
{
	return paymentID;
}
char Payment::getPaymentType()
{
  for(int i = 0 ; i < 10 ; i++ )
  {
    cout<< paymentType[i];
  }
  return 0;
}
double Payment::getPaymentAmount()
{
	return paymentAmount;
}
//Destructor
Payment::~Payment()
{
	cout<<"Payment Destructor called" << endl;
}