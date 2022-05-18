//Payment class
class Payment{
	private:
		int paymentID;
		char paymentType[10];
		double paymentAmount;
	public:
		Payment();
		Payment( int payID , char payType[], double payAmount );
		void setPaymentDetails( int payID , char payType[] );
		void setPaymentAmount( double payAmount );
		int getPaymentID(); 
		char getPaymentType();
		double getPaymentAmount();
		~Payment();
};