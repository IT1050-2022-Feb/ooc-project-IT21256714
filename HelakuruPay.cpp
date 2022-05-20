//IT21261046 
HelakuruPay::HelakuruPay(){
	//default constructor
}
HelakuruPay::HelakuruPay(int PID, float PAmount, int H_ID, char H_Name[]) : Payment(PID, PAmount)
{
	HelaID = H_ID;
	strcpy(HelaName,H_Name);
}
void HelakuruPay::HelaAuthorize(){}
void HelakuruPay::DisplayHelaDetails()
{
	cout<< "Payment ID : " << PaymentID <<endl;
	cout<< "Payment Amount : " <<PaymentAmount <<endl;
	cout<< "Helakuru ID :" << HelaID <<endl;
	cout<< "Helakuru Name :" << HelaName <<endl;
}
HelakuruPay::~HelakuruPay(){
	//default destructor
}