/*

* Implementation file of Homework class - contains the Implementation of methods

* Completion time: 20 mins

*

* @author Kien Ta

* @version C++

*/
#include <iostream>
#include "homework.h"
using namespace std;
//put 1s in the odd positions of the array and 0s in the even positions
void Homework::initialize_array(int* a, int size){
  // a = new int[size]; //initiate array a
  for(int i = 0; i < size; i++){
    if(i % 2 == 0){
      a[i] = 0;
    }
    else{
      a[i] = 1;
    }

  }
}

//Print all the elements in the array
void Homework::print_array(int* a, int size){
  //loop through every element in the array
  for(int i = 0; i < size; i++){
    cout << a[i] << " ";
  }
  //go to the new line
  cout << endl;
}

// Order the array element in descending order
void Homework::selection_sort(int* a, int size){
  for(int i = 0; i < size; i++){
    //max_val store the max element starting from index i 
    //max_index is the index of max
    int max_val = a[i];
    int max_index = i;
    for(int j = i + 1; j < size; j++){
      if(a[j] > a[max_index]){
        max_index = j;
        max_val = a[j]; 
      }
    }
    //swap index i and max_index
    a[max_index] = a[i];
    a[i] = max_val;
  }
}

int Homework::factorial(int n){
  //Base case
  if(n == 0)
    return 1;
  //recursive case: n! = n * (n - 1)!
  return n * factorial(n - 1);
}
