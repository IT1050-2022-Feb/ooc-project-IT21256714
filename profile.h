#include "user.h"

class profile{
   private:
       User *user;
       int profileID;
       int type;
       char admin[20];
       char customer[20];
   public:
      profile(int pID, int ptype);
      void displayProfileTypes();
      void setProfileType(int ptype,const char pAdmin[],const char pCustomer[]);
      void setProfileDetails(int ptype,const char pAdmin[],const char pCustomer[],const char uName[],const char uAddress[],const char uNIC[],const char uEmail[],const char uPassword[]);
      void displayProfileDetails();
      ~profile();
};