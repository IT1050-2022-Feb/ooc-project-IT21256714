//IT21261664 - Dias M.A.S.S.A
#include "Customer.h"
#include "Ticket.h"

class Books
{
private:
    char ticketId[10];
    char customerId[10];
    Customer* cus;
    Ticket* tic;

public:
    Books(Customer* c, Ticket* t, const char tId[], const char cId[]);
    void displayBookingDetails();
};