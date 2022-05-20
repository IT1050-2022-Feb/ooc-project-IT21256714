// IT21256714    Munasinghe L.S
#include "Order.h"
#include<iostream>
#include<cstring>

using namespace std;

Order::Order(int OID, const char Stype[], int Nofseats, float time)
{
    OrderID = OID;
    strcpy(seatType, Stype);
    noOfSeats = Nofseats;
    Time = time;
    Ticket = tc;

}

void Order::AddOrderDetails()
{


}

void Order::displayOrderDetails()
{
    cout << "Order ID - "  << OrderID << endl;
    cout << "Seat Type - "  << seatType << endl;
    cout << "No Of Seats - "  << noOfSeats << endl;
    cout << "Time - "  << Time << endl;
   

}