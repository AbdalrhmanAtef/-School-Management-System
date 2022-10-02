#ifndef STUDENTFILE
#define STUDENTFILE

#include "configurations.h"
#include "person.h"
typedef struct{
    char name[maxString];
    char phone[maxPhoneNumber];
    int ID;
    int Grade;
    int classNumber;
    person mother;
    person father;
    person* siblings;
}student;
// extern global variables used in student.c
extern int studentNumber;
extern student students[maxStudents];
//functions prototypes
void addStudent();
void findByName();
void findByID();
void deleteStudent();
void editStudent();
void printStudent();
void printSchoolStudents();
#endif // STUDENTFILE
