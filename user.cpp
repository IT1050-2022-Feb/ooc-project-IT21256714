#include "user.h"
#include <iostream>
#include <cstring>
using namespace std;

User::User(){
  
}

User::User(const char uName[], const char uAddress[], const char uNIC[], const char uEmail[], const char uPassword[]){

   strcpy(name,uName);
   strcpy(address,uAddress);
   strcpy(NIC,uNIC);
   strcpy(email,uEmail);
   strcpy(password,uPassword);
};


void User::AddUserDetails(const char uName[],const char uAddress[],const char uNIC[]){
  strcpy(name,uName);
  strcpy(address,uAddress);
  strcpy(NIC,uNIC);
}

void User::Register(const char uEmail[], const char uPassword[]){
    strcpy(email,uEmail);
    strcpy(password,uPassword);
}

void User::displayDetails()
{
  cout << "User Name : " << name << endl;
  cout << "Adress : " << address << endl;
  cout << "NIC : " << NIC << endl;
  cout << "Email : " << email << endl;
}

User::~User()
{
   cout << "Deleting user" << endl;
}