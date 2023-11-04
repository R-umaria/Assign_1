#include"student.h"

//C (Create)
STUDENT CreateStudent(int StudentNum, char* Name) {
	STUDENT s;
	s.studentnum = StudentNum;
	s.name = Name;
	return s;
}

//R (Read)
int GetStudentNumberFromStudent(STUDENT s) {

}
char* GetStudentNameFromStudent(STUDENT s) {

}

//U (update)
bool SetStudentNumberInStudent(STUDENT s, int StudentNum) {

}
bool SetStudentNameInStudent(STUDENT s, char* Name) {

}

//D (Destroy)
void DestroyStudent(STUDENT s) {
	
	}