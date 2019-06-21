#include <iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
  GradeBook gradeBook1("CS101 Introduction to Programming in C++");
  GradeBook gradeBook2("CS102 C++ Data Structures");

  cout << "gradeBook1's initial course is: " << gradeBook1.getCourseName() << endl;
  cout << "gradeBook2's initial course is: " << gradeBook2.getCourseName() << endl;

  gradeBook1.setCourseName("CS101 C++ Programming");

  cout << "gradeBook1's initial course is: " << gradeBook1.getCourseName() << endl;
  cout << "gradeBook2's initial course is: " << gradeBook2.getCourseName() << endl;
}