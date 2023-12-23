//Elian Renteria
//CSE 2020 Lab 03

#include <fstream>
#include <iostream>
#include "Student.cpp"

using namespace std;

int main()
{
        int idremove;
        pair<int, string> studentin;
        NodeType* team = nullptr;
        NodeType* ptr = nullptr;
        NodeType* pre = nullptr;
        NodeType* cur = nullptr;
        //enter students
        do{     
                cout << "\nEnter the student id and name: ";
                cin >> studentin.first >> studentin.second;
                if(studentin.first != 0)
                {
                        Student newstu = Student(studentin.first, studentin.second);
                        ptr = new NodeType(newstu);
                        ptr->next = team;
                        team = ptr;
                        cout << "\nThe student is added";
                }
        }while(studentin.first != 0);
        //print all students
        cout << "\nThe students are : ";
        ptr = team;
        while(ptr != nullptr)
        {
          ptr->student.print_student();
          ptr = ptr->next;
        }
        cout << "\n";
        //remove student
        cout << "\nThe student id to be removed: ";
        cin >> idremove;
        pre = team;
        if(team->student.get_id() == idremove)
        {
          team = team->next;
          delete pre;
        }
        else
        {
          while((pre->next != nullptr) && (pre->next->student.get_id() != idremove))
            pre = pre->next;
          if(pre->next != nullptr)
          {
            cur = pre->next;
            pre->next = cur->next;
            delete cur;
          }
        }
        //print all students
        cout << "\nThe students are : ";
        ptr = team;
        while(ptr != nullptr)
        {
          ptr->student.print_student();
          ptr = ptr->next;
        }
        cout << "\n";

        return 0;
}  
