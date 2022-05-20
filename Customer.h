//IT21261664 - Dias M.A.S.S.A
#include "User.h"
#include "Ticket.h"
class Customer : public User
{
private:
	char customerId[10];
	Ticket* ticket[SIZE];
	int numberOfTickets;

public:
	Customer();
	Customer(const char cId[], const char cName[], const char cAddress[], const char cNIC[], const char cEmail[], const char cPassword[]);
	void login();
	void addBooking(Ticket* t);
	void displayCustomerDetails();
	~Customer();
};