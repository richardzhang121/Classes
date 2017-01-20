#include "videogame.h"

#include <iostream>
#include <cstring>

using namespace std;

// Constructor
VideoGame::VideoGame(char* _publisher, char* _rating, char* _title, char* _year):Media() {
  rating = new char[100];
  publisher = new char[100];
  strcpy(publisher, _publisher);
  strcpy(rating, _rating);
  strcpy(title, _title);
  strcpy(year, _year);
  id = 1;
}

// Deconstructor
VideoGame::~VideoGame() {
  delete [] publisher;
  delete [] rating;
}

// Accessors
char* VideoGame::getPublisher(){
  return publisher;
}

char* VideoGame::getRating(){
  return rating;
}

void VideoGame::printInfo(){
  cout<< "Video Game: " << "-Title: " << title << " -Year: " << year << " -Publisher: " << publisher << " -Rating: " << rating << endl;
}