//IT21260988 

#include "Admin.h"
#include <cstring>
#include <iostream>

using namespace std;

Admin::Admin(int AID, char aname[]){
  AdminID = AID;
  strcpy(AdminName, aname);
}

void Admin::displayAdminDetails(){
  cout << "Admin name: " << AdminName << endl;
  cout << "Admin ID: " << AdminID << endl;
}

void Admin::viewDetails(){}

int Admin::getID(){
  return AdminID;
}

Admin::~Admin(){
  cout << "\n\nAdmin destructor is deleted" << endl;
}