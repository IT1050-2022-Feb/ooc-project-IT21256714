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

}