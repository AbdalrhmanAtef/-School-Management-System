#include "student.h"
#include "nameID.h"
#include "binarySearchTree.h"

static int studentNumber=0;
static Student studentsArray[MAXSTUDENTS];
static nameID keepNameID[MAXSTUDENTS];
static struct node* root=0;
//helping functions
void stringScan(char *str,int maxSize)
{

    int i=0;
    scanf(" %c",&str[i]);
    for(;str[i]!='\n' && i<maxSize-1;){
        i++;
        scanf("%c",&str[i]);
    }
    str[i]=0;
}
void addStudent(){
    int siblingsNumbers;
    printf("Please enter the name of the student\n");
    stringScan(studentsArray[studentNumber].name,MAXSTRING);
    printf("Please enter the phone number of the student\n");
    stringScan(studentsArray[studentNumber].phone,MAXPHONENUMBER);
    studentsArray[studentNumber].ID=studentNumber;
    printf("Please enter the class number\n");
    scanf("%d",&(studentsArray[studentNumber].classNumber));
    printf("Please enter the math grade (maxScore 100)\n");
    scanf("%d",&(studentsArray[studentNumber].grades.mathGrade));
    printf("Please enter the physics grade (maxScore 100)\n");
    scanf("%d",&(studentsArray[studentNumber].grades.physicsGrade));
    printf("Please enter the chemistry grade (maxScore 100)\n");
    scanf("%d",&(studentsArray[studentNumber].grades.chemistryGrade));
    printf("Please enter the english grade (maxScore 100)\n");
    scanf("%d",&(studentsArray[studentNumber].grades.englishGrade));
    printf("Please enter the arabic grade (maxScore 100)\n");
    scanf("%d",&(studentsArray[studentNumber].grades.arabicGrade));
    printf("Please enter the father's name\n");
    stringScan(studentsArray[studentNumber].father.name,MAXSTRING);
    printf("Please enter the phone number of the father\n");
    stringScan(studentsArray[studentNumber].father.phone,MAXPHONENUMBER);
    printf("Please enter the mother's name\n");
    stringScan(studentsArray[studentNumber].mother.name,MAXSTRING);
    printf("Please enter the phone number of the mother\n");
    stringScan(studentsArray[studentNumber].mother.phone,MAXPHONENUMBER);
    printf("Please enter the number of brothers\n");
    scanf("%d",&siblingsNumbers);
    studentsArray[studentNumber].siblings= (Person*) malloc(siblingsNumbers*sizeof(Person));
    for(int i=1;i<=siblingsNumbers;i++){
    printf("Please enter the brother %d name\n",i);
    stringScan(studentsArray[studentNumber].siblings[i-1].name,MAXSTRING);
    printf("Please enter the brother %d phone number\n",i);
    stringScan(studentsArray[studentNumber].siblings[i-1].phone,MAXPHONENUMBER);
    }
    //adding the name and id to keepNameID to insert in binary search tree
    keepNameID[studentNumber].name[0]=&(studentsArray[studentNumber].name);
    keepNameID[studentNumber].ID=studentNumber;
    insert(root,&keepNameID[studentNumber]);
    studentNumber++;
}
