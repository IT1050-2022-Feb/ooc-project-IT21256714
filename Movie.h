//IT21260988 

#include<cstring>

class Movie
{
private:
    char name[100];
    int movieID;
    char releasedDate[100];
    char description[200];

public:
    Movie(int pMID);
    void setMovieDetails(const char pname[],const char preleasedDate[], const char pdescription[]);
    void addMovies();
    void updateMovies();
    void deleteMovies();
    void displayMovies();
    ~Movie();
};