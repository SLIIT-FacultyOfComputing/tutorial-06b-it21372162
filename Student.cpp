#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std ;

// Assign studentId and name
void Student::assignDetails(int no , char name[]) {
  studentID = no ;
  strcpy(studentName , name) ;
}

// Display StudentId and Name
void Student::display() {
  cout << "----------------------------------------" << endl ;
  cout << "The Student ID : " << studentID << endl ;
  cout << "TheName if the Student : " << studentName << endl ;
}