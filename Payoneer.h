//IT21261046 - Perera W.M.M.S.D.S

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