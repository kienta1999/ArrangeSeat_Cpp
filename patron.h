/*

* Header file of Patron class - contains the definition of methods

* Completion time: 10 mins

*

* @author Kien Ta

* @version C++

*/
#ifndef PATRON_H
#define PATRON_H

#include <iostream> 
using namespace std; 
#include <cstring>

class Patron{
  private:
    char lastName[30];
    char firstName[30];
  public: 
    Patron();//default constructor
    Patron (char* patronInfo); //constructor to create patron
    char* getLastName ( ); //return the patron's last name
    char* getFirstName ( ); //return the patron's first name
    char* toString (); //return a string represent patron's name
};


#endif