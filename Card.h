//IT21261046 

#include"Payment.h"
#include"Order.h"

class Card : public Payment{
	private:
		int CardNumber;
		char Card_HolderName[20];
		char ExpDate[20];
	public:
		Card();
		Card(int PID, float PAmount,int C_Number, char C_Name[], char C_Exp[]);
		void CardAuthorize();
		void DisplayCardDetails();
		~Card();
};