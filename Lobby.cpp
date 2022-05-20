#include <iostream>
#include "Lobby.h"
using namespace std;

//defalt constructor
Lobby::Lobby()
{
	lobbyID = 0;
}
//overloaded constructor
Lobby::Lobby(int LID)
{
	lobbyID = LID;
}
void Lobby::setLobbydetails(int LID)
{
	
}
//Destructor
Lobby::~Lobby()
{
	cout<<"Lobby Destructor called" << endl;
}