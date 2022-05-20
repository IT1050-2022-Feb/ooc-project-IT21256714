//IT21261664 - Dias M.A.S.S.A
#include "Customer.h"
class Ticket
{
private:
	char ticketId[10];
	char ticketType[10];
	Customer* c;

public:
	Ticket();
	Ticket(const char tId[], const char tType[], Customer* cus);
	void displayTicketDetails();
	void confirmTicketDetails();
	~Ticket();
};