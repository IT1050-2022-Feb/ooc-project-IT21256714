
class Order
{

protected:
    int OrderID;
    char seatType[10];
    int noOfSeats;
    float Time;
    Ticket* tc;



public:
    Order(int OID, const char Stype[], int Nofseats, float time);
    void AddOrderDetails();
    void displayOrderDetails();
    ~Order();
};

    