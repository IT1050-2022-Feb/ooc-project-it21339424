//Admin class
class Admin {
	private:
		int adminID;
		char name[20];
	public:
		Admin();
		Admin( int AID , char name[] );
		void setAdmindetails( int AID , char name[] );
		~Admin();
};