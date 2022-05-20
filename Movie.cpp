// IT21260988 - Randeniya R. A. D. S. E

#include "Movie.h"
#include <cstring>
#include <iostream>

using namespace std;

Movie::Movie(int pMID)
{
  movieID = pMID;
}

void Movie::setMovieDetails(const char pname[], const char preleasedDate[], const char pdescription[])
{
  strcpy(name, pname);
  strcpy(releasedDate, preleasedDate);
  strcpy(description, pdescription);
}
void Movie::addMovies() {}
void Movie::updateMovies() {}
void Movie::deleteMovies() {}

void Movie::displayMovies()
{
  cout << "\nMovie ID: " << movieID;
  cout << "\nMovie name: " << name;
  cout << "\nMovie released date: " << releasedDate;
  cout << "\nMovie description: " << description << endl;
  cout << endl;
}

Movie::~Movie()
{
  cout << "\nMovie object " << movieID << " is deleted";
}