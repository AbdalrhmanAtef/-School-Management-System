#ifndef STUDENTFILE
#define STUDENTFILE

#include "configurations.h"
#include "person.h"
#include "subjects.h"
typedef struct{
    char name[MAXSTRING];
    char phone[MAXPHONENUMBER];
    int ID;
    int classNumber;
    Subjects grades;
    Person mother;
    Person father;
    Person* siblings;
}Student;
//functions prototypes
void addStudent();
void findByName();
void findByID();
void deleteStudent();
void editStudent();
void printStudent();
void printSchoolStudents();
#endif // STUDENTFILE
