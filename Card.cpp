//IT21261046 Perera W.M.M.S.D.S

#include<iostream>
#include<cstring>
#include"Payment.h"
#include"Order.h"
using namespace std;

Card::Card(){
  //default constructor
}
Card::Card(int PID, float PAmount, int C_Number,char C_Name[], char C_Exp[]) : Payment(PID, PAmount)
{
	
	CardNumber = C_Number;
	strcpy(Card_HolderName,C_Name);
	strcpy(ExpDate, C_Exp);
}
void Card::CardAuthorize(){}
void Card::DisplayCardDetails()
{
	cout<< "Payment ID : " << PaymentID <<endl;
	cout<< "Payment Amount : " <<PaymentAmount <<endl;
	cout<< "Card Number :" << CardNumber <<endl;
	cout<< "Card Holder Name :" <<Card_HolderName <<endl;
	cout<< "Card Exp Date : " << ExpDate <<endl;
}
Card::~Card(){
	//default destructor
}
