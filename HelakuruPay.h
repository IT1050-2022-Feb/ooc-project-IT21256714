//IT21261046 Perera W.M.M.S.D.S

#include"Payment.h"
#include"Order.h"


class HelakuruPay : public Payment{
	private:
		int HelaID;
		char HelaName[40];
	public:
		HelakuruPay();
		HelakuruPay(int PID, float PAmount,int H_ID, char H_Name[]);
		void HelaAuthorize();
		void DisplayHelaDetails();
		~HelakuruPay();
};