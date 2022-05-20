// IT21260988 - Randeniya R. A. D. S. E

#include "Movie.h"
#define movieSIZE 2

class Theatre
{
private:
    Movie *movie[movieSIZE];
    int theatreID;
    char name[100];
    char location[200];
    char description[200];

public:
    Theatre(int pTID, char pName[], char plocation[], char pdescription[]);
    void viewTheatreDetails();
    void addTheatre();
    void updateTheatre();
    void deleteTheatre();
    void addMovies();
    ~Theatre();
};