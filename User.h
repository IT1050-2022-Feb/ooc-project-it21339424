//User class
class User {
	protected:
		char username[30];
		char password[10];
	private:
		int memberId;
		char memberName[20];
	public:
		User();
		User( int MID, char MName[], char uName[], char pwd[] );
		void setMemberdetails( int MID, char MName[] );
		void setuserLogin( char uName[], char pwd[] );
		void purchaseGames( int GID );
		int getmemberID();
		char getmemberName();
		char getuserName();
		char getPassword();
		~User();
};