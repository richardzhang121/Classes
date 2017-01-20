#ifndef MEDIA_H
#define MEDIA_H

class Media {
  protected:
    char* title; // char title[10];
    char* year; // int year;
    int id;
    
  public:
    // Constructor
    Media();
    ~Media(); // Media(char _title[10], int _year);
    
    // Accessors
    char* getTitle(); // void getTitle(char* destArr);
    char* getYear(); // int getYear();
    int getID(); // char getType();
};

#endif