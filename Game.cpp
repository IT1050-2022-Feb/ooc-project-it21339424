#include <iostream>
#include "Game.h"
#include <cstring>
using namespace std;

//defalt constructor
Game::Game()
{
	gameID = 0;
	strcpy( gameName , "" );
}
//overloaded constructor
Game::Game( int GID , char Gname[] )
{
	gameID = 0;
	strcpy( gameName , "Gname" );
}
void Game::setGamedetails( int GID , char Gname[] )
{
	
}
void Game::editGames( int GID , char Gname[] )
{
	
}
void Game::viewGames( int GID , char Gname[] )
{
	
}
//Destructor
Game::~Game()
{
	cout<<"Game Destructor called" << endl;
}