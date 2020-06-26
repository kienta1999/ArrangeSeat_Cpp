/*

* Source file of Patron class - contains the implementation  of methods

* Completion time: 20 mins

*

* @author Kien Ta

* @version C++

*/
#include "patron.h"

//initiate default patron with name *** ***
Patron::Patron(){
  strcpy(lastName, "***");
  strcpy(firstName, "***");
}
//create a patron with given name separated by /
Patron::Patron(char* patronInfor){
  char* token = strtok(patronInfor, "/");
  strcpy(firstName, token);
  token = strtok(NULL, "/");
  strcpy(lastName, token);
}
//return patron's last name
char* Patron::getLastName(){
  return lastName;
} 
//return patron's first name
char* Patron::getFirstName (){
  return firstName;
} 
//return the abbreviation of patron's name
char* Patron::toString (){
  char* str = new char[4];
  str[0] = firstName[0];
  str[1] = '.';
  str[2] = lastName[0];
  str[3] = '.';
  return str;
}