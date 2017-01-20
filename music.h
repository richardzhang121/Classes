#ifndef MUSIC_H
#define MUSIC_H

#include "media.h"

class Music : public Media {
  private:
    char* publisher;
    char* artist;
    char* duration;
  
  public:
    // Constructor
    Music(char* _publisher, char* _artist, char* _title, char* _year, char* _duration);
    
    // Deconstructor
    ~Music();
    
    // Accessors
    char* getPublisher();
    char* getArtist();
    char* getDuration();
    
    void printInfo();
};

#endif