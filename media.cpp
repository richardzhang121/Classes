#include "media.h"

#include <iostream>
#include <cstring>

using namespace std;

// Constructor
Media::Media() {
  title = new char[100];
  year = new char[100];
  id = 0;
}

// Deconstructor
Media::~Media() {
  delete [] title;
  delete [] year;
}

// Accessors
char* Media::getTitle() {
  return title;
}

char* Media::getYear() {
  return year;
}

int Media::getID() {
  return id;
}