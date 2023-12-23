//Elian Renteria
//CSE 2020 Lab03

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class Student
{
public:
  // Default constructor 
  Student()
  {
        name = "";
        id = 0;
  }

    // Creates a student with the specified id and name.
    Student(int idvalue, const string& namevalue)
    {
    name = namevalue;
    id = idvalue;
  }

    // Returns the student name.
    string get_name() const
    {
    return name;
  }

    // Returns the student id.
    int get_id () const
    {
    return id;
  }

    // Sets the student name.
    void set_name(const string& namevalue)
    {
    name = namevalue;
  }

    // Sets the student id.
    void set_id(int idvalue)
    {
    id = idvalue;
  }

    // Prints the student id and name.
    void print_student() const
    {
    cout << "\n" << id << "   " << name;
  }
private:
    // student name
    string name;

    // student id
    int id;
};
struct NodeType
{
  Student student;
  NodeType* next;

  NodeType() : student(), next(nullptr)
  {
      //student = Student();
      //next = NULL;
  }

  NodeType(const Student& s): student(s), next(nullptr)
  {
      //student = s;
      //next = NULL;
  }

};

#endif