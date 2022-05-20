//IT21261664 - Dias M.A.S.S.A
#include "Ticket.h"
#include "Customer.h"
#include<iostream>
#include<cstring>
using namespace std;

Ticket::Ticket() {
	//Default Constructor
}

Ticket::Ticket(const char tId[], const char tType[], Customer* cus) {
	strcpy(ticketId, tId);
	strcpy(ticketType, tType);

	c = cus;
	c->addBooking(this);

}

void Ticket::displayTicketDetails() {
	cout << "Ticket ID : " << ticketId << endl;
	cout << "Ticket type : " << ticketType << endl;
}

void Ticket::confirmTicketDetails() {

}

Ticket::~Ticket() {
	//Destructor
}
