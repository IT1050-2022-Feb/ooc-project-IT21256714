#include "Order.h"
#include"profile.h"
#include "Admin.h"
#include<iostream>
#include<cstring>

using namespace std;

int main()
{


  //IT21256714
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


  
  //IT21260988 - Randeniya R. A. D. S. E
  cout << "\n------------------Admin-------------------\n";
  Admin *admin = new Admin(1, "Jacob");
  
  admin->displayAdminDetails();


  
  cout << "\n\n------------------Movies------------------\n";
  Movie *movie = new Movie(1);
  movie->setMovieDetails("Harry Potter", "2007-09-18", "Harry Potter and the Deathly Hallows");
  
  Movie *movie2 = new Movie(2);
  movie2->setMovieDetails("Percy Jackson", "2007-09-18", "Percy Jackson and the Last Olympian");
  
  movie->displayMovies();
  movie2->displayMovies();

  
  
  cout << "\n\n-----------------Theatres-----------------\n";
  Theatre *theatre = new Theatre(1, "Savoy", "Colombo", "Theatre");
  theatre->viewTheatreDetails();


  
  cout << "\n\n-------------Privacy Policies-------------\n";
  Policy *policy = new Policy(1, "2022-05-19", "QuickBook.com can use personal data for risk assessment and security purposes, including the authentication of companies");
  policy->displyPolicies();
  

 cout<<"\n\n------------------------------------------------\n"<<endl;

  delete movie;
  delete movie2;
  delete theatre;
  delete policy;
  delete admin;


  //IT21261046
  Payment *p = new Payment(5,2000);
	
	Card *c = new Card(1,3000,1234,"Sandaru","10-20-22");
	c->DisplayCardDetails();
	cout<<endl;
	
	Payoneer *pa = new Payoneer(2,4000,2345,"Sandaru@gmail.com");
	pa->DisplayPayoneerDetails();
	cout<<endl;
	
	HelakuruPay *H = new HelakuruPay(4,5000, 32123, "Dewmith");
	H->DisplayHelaDetails();

  delete p;
  delete c;
  delete pa;
  delete H;

  
  //IT21261664

  class Customer;
  class Ticket;

  
  Customer *C[2];
  C[0] = new Customer("C1","Kamal","Kelaniya","123456789v","kamal@gmail.com","Kamal123");
  C[1] = new Customer("C2","Sunil","Malabe","839292929v","Sunil@gmail.com","Sunil123");

  Ticket *T[2];
  T[0] = new Ticket("001","Type1",C[0]);
  T[1] = new Ticket("002", "Type2", C[1]);

  Books booking1(C[0],T[0],"001","C1");
  Books booking2(C[1],T[0], "002", "C2");

  delete C[0];
  delete C[1];
  delete T[0];
  delete T[1];

}