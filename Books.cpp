//IT21261664 - Dias M.A.S.S.A
#include "Books.h"
#include "Customer.h"
#include "Ticket.h"
#include<iostream>
#include<cstring>
using namespace std;

Books::Books(Customer* c, Ticket* t, const char tId[], const char cId[]) {
    cus = c;
    tic = t;
    strcpy(ticketId, tId);
    strcpy(customerId, cId);
}

void Books::displayBookingDetails() {
    cus->displayCustomerDetails();
    tic->displayTicketDetails();
}