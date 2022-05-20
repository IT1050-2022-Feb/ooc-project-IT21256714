//IT21261046 

#include"Payment.h"
#include"Order.h"


class Payoneer : public Payment{
	private:
		int PayoneerID;
		char PayoneerName[40];
	public:
		Payoneer();
		Payoneer(int PID,float PAmount,int PA_ID, char PA_Name[]);
		void PayoneerAuthorize();
		void DisplayPayoneerDetails();
		~Payoneer();
};