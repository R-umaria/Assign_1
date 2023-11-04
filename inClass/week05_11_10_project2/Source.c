#include <stdio.h>
#include"student.h"

int main(void) {

	classroom c = CreateClassroom("prog71985");
	AddProfessorToClassroom(c, createProfessor("steve", "acsit"));

	while (!ClassIsAtCapacity(c)) {
		int StudentNum = GetIntFromUser();
		char* Name = GetStringFromUser();
		student s = CreateStudent(StudentNum, Name);
		AddStudentToClassroom(c, s);
	}

	PrintClassList(c);

	DestroyClassroom(c);

	return 0;
}