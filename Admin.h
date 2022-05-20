//IT21260988 - Randeniya R. A. D. S. E

#include "user.h"
#include "Theatre.h"
#include "PrivacyPolicy.h"
#define theatreSIZE 5
#define policySize 5

class Admin : public User
{
private:
    int AdminID;
    char AdminName[100];
    Movie *movie[movieSIZE];
    Theatre *theatre[theatreSIZE];
    Policy *policy[policySize];

public:
    Admin(int AID, char aname[]); 
    void displayAdminDetails();
    void viewDetails();
    int getID();
    ~Admin();

};