//header file
#include <iostream>
#include "User.h"
#include "Guest.h"
#include "Admin.h"
#include "Game.h"
#include "News.h"
#include "Payment.h"
#include "Lobby.h"
#include <cstring>
using namespace std;

int main() {

  //creating object
  User U1;
  User U2( 01, (char *) "Samith", (char *) "samithperera", (char *) "samith@2022" );
  
  Admin A1;
  Admin A2( 03, (char *) "Akidu" );
  
  Guest Gu1;
  Guest Gu2( 04 );
  
  Game G1;
  Game G2( 10, (char *) "COD4" );
  
  News N1;
  News N2( 12, (char *) "Populer games in 2022") ;
  
  Payment P1;
  Payment P2( 01344, (char *) "Visa", 3000.00 );
  
  Lobby L1;
  Lobby L2( 1003 );

  return 0;
}
//end main