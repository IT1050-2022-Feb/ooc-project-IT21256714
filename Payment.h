#include"Order.h"

class Payment{
	protected:
		int PaymentID;
		float PaymentAmount;
		Order *Or;
	public:
		Payment();
		Payment(int PID, float PAmount, Order *O);
		Payment(int PID, float PAmount);
		float CalDiscount();
		void UpdatePayment();
		void CheckPayment();
		void ConfirmPayment();
		void DisplayPaymentDetails();
		~Payment();
};