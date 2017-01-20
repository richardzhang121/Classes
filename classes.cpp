#include <iostream>
#include <vector>
#include <cstring>

#include "media.h"
#include "movie.h"
#include "music.h"
#include "videogame.h"

using namespace std;

void add(vector<Media*>* db);
void search(vector<Media*> db);
void del(vector<Media*>* db);

int main() {
  vector<Media*> db;
  vector<Media*>* dbPtr = &db;
  char input;
  
  while(input != 'q'){
    cout << "What would you like to do? (Enter a number.) \n1.Add\n2.Search\n3.Delete\n4.Quit" << endl;
    cin >> input;
    if (input == '1') {
      add(dbPtr);
    } else if (input == '2') {
      search(db);
    } else if (input == '3') {
      del(dbPtr);
    } else {
      return 0;
    }
  }
}

// Functions
void add(vector<Media*>* db) {
  char title[100];
  char year[100];
  int input;
  
  cout << "What's the title?" << endl;
  cin >> title;
  cout << "What year was it released in?" << endl;
  cin >> year;
  
  cout << "Is it: (1) a video game, \n (2) music, or \n (3) movies? \n Enter a number." << endl;
  cin >> input;
  
  if (input == 1) {
    char rating[100];
    char publisher[100];
    
    cout << "What's the rating?" << endl;
    cin >> rating;
    cout << "Who's the publisher?" << endl;
    cin >> publisher;
    
    VideoGame* videogame = new VideoGame(publisher, rating, title, year);
    db -> push_back(videogame);
    
    cout << title << " successfully added to the database." << endl;
  } else if (input == 2) {
    char publisher[100];
    char artist[100];
    char duration[100];
    
    cout << "Who's the publisher?" << endl;
    cin >> publisher;
    cout << "Who's the artist?" << endl;
    cin >> artist;
    cout << "What's the duration?" << endl;
    cin >> duration;
    
    Music* music = new Music(publisher, artist, title, year, duration);
    db -> push_back(music);
    
    cout << title << " successfully added to the database." << endl;
  } else if (input == 3) {
    char director[100];
    char duration[100];
    char rating[100];
    
    cout << "Who's the director?" << endl;
    cin >> director;
    cout << "What's the duration?" << endl;
    cin >> duration;
    cout << "What's the rating?" << endl;
    cin >> rating;
    
    Movie* movie = new Movie(director, duration, rating, year, title);
    db -> push_back(movie);
    
    cout << title << " successfully added to the database." << endl;
  }
}

void search(vector<Media*> db) {
  int input;
  
  cout << "Would you like to search by (1) title or (2) year?" << endl;
  cin >> input;
  
  if (input == 1) {
    char title[100];
    
    cout << "What's the title?" << endl;
    cin >> title;
    
    for (int i = 0; i < db.size(); i++) {
      cout << "Here are your results: " << endl;
      
      if (strcmp(title, db[i] -> getTitle()) == 0) {
        if (db[i] -> getID() == 1) {
          ((VideoGame*) db[i]) -> printInfo();
        } else if(db[i] -> getID() == 2) {
          ((Music*) db[i]) -> printInfo();
        } else if(db[i] -> getID() == 3) {
          ((Movie*) db[i]) -> printInfo();
        }
      }
    }
  } else if (input == 2) {
    char year[100];
    
    cout << "What year was it released in?" << endl;
    cin >> year;
    
    for (int i = 0; i < db.size(); i++) {
      cout << "Here are your results: " << endl;
      
      if (strcmp(year, db[i] -> getYear()) == 0) {
        if (db[i] -> getID() == 1) {
          ((VideoGame*) db[i]) -> printInfo();
        } else if(db[i] -> getID() == 2) {
          ((Music*) db[i]) -> printInfo();
        } else if(db[i] -> getID() == 3) {
          ((Movie*) db[i]) -> printInfo();
        }
      }
      else {
        cout << " " << endl;
      }
    }
}
}

void del(vector<Media*>* db) {
  int input;
  
  cout << "Would you like to delete by (1) title or (2) year?" << endl;
  cin >> input;
  
  if (input == 1) {
    char title[100];
    
    cout << "What's the title?" << endl;
    cin >> title;
    
    for (int i = 0; i < db->size(); i++) {
      cout << "Here are your results: " << endl;
      
      if (strcmp(title, (*db)[i] -> getTitle()) == 0) {
        if ((*db)[i] -> getID() == 1) {
          delete ((VideoGame*) (*db)[i]);
	  db->erase(db->begin() + i);
        } else if((*db)[i] -> getID() == 2) {
          delete ((Music*) (*db)[i]);
	        db->erase(db->begin() + i);
        } else if((*db)[i] -> getID() == 3) {
          delete ((Movie*) (*db)[i]);
	        db->erase(db->begin() + i);
        }
      }
    }
  } else if (input == 2) {
    char year[100];
    
    cout << "What year was it released in?" << endl;
    cin >> year;
    
    for (int i = 0; i < db -> size(); i++) {
      cout << "Here are your results: " << endl;
      
      if (strcmp(year, (*db)[i] -> getYear()) == 0) {
        if ((*db)[i] -> getID() == 1) {
          delete ((VideoGame*) (*db)[i]);
	        db->erase(db->begin() + i);
        } else if((*db)[i]->getID() == 2) {
          delete ((Music*) (*db)[i]);
	        db->erase(db->begin() + i);
        } else if((*db)[i]->getID() == 3) {
          delete ((Movie*) (*db)[i]);
	        db->erase(db->begin() + i);
        }
      }
    }
  }
}
