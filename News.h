class News{
	private:
		int newsID;
        char newsName[20];
    public:
    	News();
		News( int NID , char Nname[] );
		void setNewsdetails( int NID , char Nname[] );
		void editNews( int NID , char Nname[] );
		void viewNews( int NID , char Nname[] );
		~News();
};