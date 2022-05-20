//IT21261046 Perera W.M.M.S.D.S

#include<iostream>
#include<cstring>
#include"Payment.h"
#include"Order.h"
using namespace std;

Payoneer::Payoneer(){
	//default Constructor
}
Payoneer::Payoneer(int PID, float PAmount, int PA_ID, char PA_Name[]) : Payment(PID, PAmount)
{
	PayoneerID = PA_ID;
	strcpy(PayoneerName, PA_Name);
}
void Payoneer::PayoneerAuthorize(){}
void Payoneer::DisplayPayoneerDetails()
{
	cout<< "Payment ID : " << PaymentID <<endl;
	cout<< "Payment Amount : " <<PaymentAmount <<endl;
	cout<< "Payoneer ID :" << PayoneerID <<endl;
	cout<< "Payoneer Name :" << PayoneerName <<endl;
}
Payoneer::~Payoneer(){
	//default destuctor
}