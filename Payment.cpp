//IT21261046 

#include<iostream>
#include<cstring>
#include"Payment.h"
#include"Order.h"
using namespace std;

Payment::Payment(){
  //default constructor
}
Payment::Payment(int PID,float PAmount, Order *O)
{
	PaymentID = PID;
	PaymentAmount = PAmount;
	Or = O;
}
Payment::Payment(int PID,float PAmount)
{
	PaymentID = PID;
	PaymentAmount = PAmount;
}
float Payment::CalDiscount(){
}
void Payment::CheckPayment(){}
void Payment::ConfirmPayment(){}
void Payment::UpdatePayment(){}

void Payment::DisplayPaymentDetails()
{
	cout<<"Payment ID :"<< PaymentID <<endl;
	cout<<"Payment Amount :"<< PaymentAmount <<endl;
	Or->DisplayOrderDetails();
}
Payment::~Payment(){
  //default destructor
}