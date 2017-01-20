#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include "media.h"

class VideoGame : public Media {
  private:
    char* publisher;
    char* rating;
  
  public:
    // Constructor
    VideoGame(char* _publisher, char* _rating, char* _title, char* _year);
    ~VideoGame();
    
    // Accessors
    char* getPublisher();
    char* getRating();
    
    void printInfo();
};

#endif