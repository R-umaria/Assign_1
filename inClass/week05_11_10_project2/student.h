#pragma once
#include<stdbool.h>
#define MAXNAME	40

 typedef struct student {
	int studentnum;
	char name[MAXNAME];
}STUDENT;
 
 //C (Create)
 STUDENT CreateStudent(int StudentNum, char* Name);


 //R (Read)
 int GetStudentNumberFromStudent(STUDENT s);
 char* GetStudentNameFromStudent(STUDENT s);

 //U (update)
 bool SetStudentNumberInStudent(STUDENT s, int StudentNum);
 bool SetStudentNameInStudent(STUDENT s, char* Name);

 //D (Destroy)
 void	DestroyStudent(STUDENT s);