/*

* Implementation file of Theatre class - contains the implementation of methods

* Completion time: 40 mins

*

* @author Kien Ta

* @version C++

*/
#include "theatre.h"

//initiate the theatre with rowNum and columnNum
Theatre::Theatre(int rowNum, int columnNum){
  totRow = rowNum;
  totCol = columnNum;
  //initiate the 2D array of seats
  seating = new Patron*[rowNum];
  for(int i = 0; i < rowNum; i++){
    seating[i] = new Patron[columnNum];
  }
}

//return the pointer to Patron at specific location
Patron* Theatre::getPatronAt(int row, int col){
  return &seating[row][col];
}

//if the seat is not taken, assign the patron
bool Theatre::assignPatronAt (int row, int col, Patron *tempPatron){
  Patron p = seating[row][col];
   if(strcmp(p.getFirstName(), "***") == 0 && strcmp(p.getLastName(), "***") == 0){
     //if the Patron is default 
    seating[row][col] = *tempPatron;
    return true;
  }
  else{
    //seat taken, cannot assign patron
    return false;
  }
}

//return true if the seat is valid
 bool Theatre::checkBoundaries(int row, int col){
     return !(row >= totRow || row < 0 || col >= totCol || col <0);
 }

 //return a string representing the map of patrons in the theatre
 char* Theatre::toString(){
   char* str = new char[500];
   strcpy(str, "");
   for(int i = 0; i < totRow; i++){
     for(int j = 0; j < totCol; j++){
       strcat(str, seating[i][j].toString());
       strcat(str, " ");
     }
     strcat(str, "\n");
   }
   return str;
 }