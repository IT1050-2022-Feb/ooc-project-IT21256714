// IT21260988 - Randeniya R. A. D. S. E

#include "Theatre.h"
#include <iostream>
#include <cstring>

using namespace std;

Theatre::Theatre(int pTID, char pName[], char plocation[], char pdescription[])
{
  theatreID = pTID;
  strcpy(name, pName);
  strcpy(location, plocation);
  strcpy(description, pdescription);
  movie[0] = new Movie(3);
  movie[1] = new Movie(4);
}
void Theatre::viewTheatreDetails()
{
  cout << "Theatre ID: " << theatreID << endl;
  cout << "Theatre Name: " << name << endl;
  cout << "Theatre Location: " << location << endl;
  cout << "Description: " << description << endl;
  addMovies();
  cout << "\n**----Movies at " << name << "----**";
  movie[0]->displayMovies();
  movie[1]->displayMovies();
}
void Theatre::addTheatre() {}
void Theatre::updateTheatre() {}
void Theatre::deleteTheatre() {}

void Theatre::addMovies()
{
  movie[0]->setMovieDetails("harry potter", "2006-09-23", "HP");
  movie[1]->setMovieDetails("percy Jackson", "2012-09-23", "PJ");
}

Theatre::~Theatre()
{
  cout << "\n\nTheatre object is deleted";
  for (int i = 0; i < movieSIZE; i++)
  {
    delete movie[i];
  }
}