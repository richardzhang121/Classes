#include "movie.h"

#include <iostream>
#include <cstring>

using namespace std;

// Constructor
Movie::Movie(char* _director, char* _duration, char* _rating, char* _year, char* _title):Media() {
  director = new char[100];
  rating = new char[100];
  duration = new char[100];
  strcpy(director, _director);
  strcpy(rating, _rating);
  strcpy(duration, _duration);
  strcpy(title, _title);
  strcpy(year, _year);
  id = 3;
}

// Deconstructor
Movie::~Movie(){
  delete [] director;
  delete []  duration;
  delete []  rating;
}

// Accessors
char* Movie::getDirector() { 
  return director;
}

char* Movie::getDuration() {
  return duration;
}

char* Movie::getRating() {
  return rating;
}

void Movie::printInfo(){
  cout <<"Movie: " << "-Title: " << title << " -Year: " << year << " -Director: " << director << " -Duration: " << duration << " -Rating: " << rating << endl;
}