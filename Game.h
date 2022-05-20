//Game class
class Game{
	private:
		int gameID;
        char gameName[20];
    public:
    	Game();
  		Game( int GID , char Gname[] );
  		void setGamedetails( int GID , char Gname[] );
  		void editGames( int GID , char Gname[] );
  		void viewGames( int GID , char Gname[] );
  		~Game();
};