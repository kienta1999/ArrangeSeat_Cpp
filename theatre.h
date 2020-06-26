/*

* Header file of Theatre class - contains the definition of methods

* Completion time: 10 mins

*

* @author Kien Ta

* @version C++

*/

#ifndef THEATRE_H
#define THEATRE_H

#include "patron.h"
#include <iostream>
#include <cstring>
using namespace std;

class Theatre{
  private:
    int totRow; //num Row of the theatre
    int totCol;//num Col of of the theatre
    Patron ** seating; // seating of Patron objects 
  
  public: 
  Theatre(int rowNum, int columnNum); //initiate the theatre with rowNum and columnNum
  Patron* getPatronAt(int row, int col); //return the pointer to Patron at specific location
  
  //if the seat is not taken, assign the patron
  bool assignPatronAt (int row, int col, Patron *tempPatron); 

  bool checkBoundaries(int row, int col); //return true if the given row and col are valid 
  char* toString(); //return a string representing the map of patrons in the theatre
};

#endif