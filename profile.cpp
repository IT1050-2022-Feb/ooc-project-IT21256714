#include "profile.h"
#include <iostream>
#include<cstring>
#define SIZE 2
using namespace std;

profile::profile(int pID, int ptype){
  profileID = pID;
  type=ptype;
  user = new User[ptype];
}
void profile::displayProfileTypes(){
  cout << "select Profile Type" << endl;
  cout << "Type 01 = Admin" << endl << "Type 02 = Customer"<< endl;
}
void profile::setProfileType(int ptype,const char pAdmin[],const char pCustomer[]){
      type=ptype;
  cout << "Enter Profile Type: " << endl;
  cin >> type;
  if (type == 1){
    strcpy(admin,pAdmin);
    cout << "Admin" << endl;
  }
  else if (type == 2){
    strcpy(customer,pCustomer);
    cout << "Customer" << endl;
  }
  else{
    cout << "Invalid profile  type" <<  endl;
  }
}

void profile::setProfileDetails(int ptype,const char pAdmin[],const char pCustomer[], const char uName[],const char uAddress[],const char uNIC[],const char uEmail[],const char uPassword[]){
  
  user[ptype].AddUserDetails(uName,uAddress,uNIC);
  user[ptype].Register(uEmail,uPassword);
}

void profile::displayProfileDetails()
{
  for (int r=0; r<SIZE; r++)
    user[r].displayDetails();
}
  
profile::~profile(){
   cout << "Profile deleted" << endl;
}