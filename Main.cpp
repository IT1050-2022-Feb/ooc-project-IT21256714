#include "Order.h"
#include"profile.h"
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    Order*o1= new Order(1, "Box seat", 2, 5.00);//create orders
    

    o1->AddOrderDetails();
   
    o1->displayOrderDetails();
   

    delete tc;

  //IT21258312
  profile *p1;
  p1 = new profile(1,1);
  p1->setProfileType(1,"Admin","");
  p1->setProfileDetails(1,"Admin","","user","Address","NIC","user@gmail.com","abcd");
  p1->displayProfileDetails();
  delete p1;


}