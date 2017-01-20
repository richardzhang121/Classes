#ifndef MOVIE_H
#define MOVIE_H

#include "media.h"

class Movie : public Media {
  private:
    char* director; // char director[10];
    char* duration; // int duration;
    char* rating; // int rating;
  
  public:
    // Constructor
    Movie(char* _director, char* _duration, char* _rating, char* _year, char* _title);
    ~Movie();
    
    // Accessors
    char* getDirector(); // void getDirector(char* destArr);
    char* getDuration(); // int getDuration();
    char* getRating(); // int getRating();
    
    void printInfo();
};

#endif