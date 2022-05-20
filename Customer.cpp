//IT21261664 - Dias M.A.S.S.A
#include "Customer.h"
#include "User.h"
#include "Ticket.h"
#include<iostream>
#include<cstring>
#define SIZE 10
using namespace std;

Customer::Customer(const char cId[], const char cName[], const char cAddress[], const char cNIC[], const char cEmail[], const char cPassword[]) :User(cName, cAddress, cNIC, cEmail, cPassword) {
    strcpy(customerId, cId);
    numberOfTickets = 0;
}

void Customer::login() {

}

void Customer::addBooking(Ticket* t) {
    if (numberOfTickets < SIZE) {
        ticket[numberOfTickets] = 0;
    }

    numberOfTickets++;
}

void Customer::displayCustomerDetails() {
    cout << "Customer Id : " << customerId << endl;
    cout << "User Name : " << name << endl;
    cout << "Address : " << address << endl;
    cout << "NIC : " << NIC << endl;
    cout << "Email : " << email << endl;

    for (int i = 0; i < numberOfTickets; i++)
        ticket[i]->displayTicketDetails();
}

Customer::~Customer() {
    //Destructor
}