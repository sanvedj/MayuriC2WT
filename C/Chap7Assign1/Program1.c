/*
Problem Statement :

Program 1: Write a C program that defines a structure named Student which has members as
{stud_id, stud_name, stud_subjects[5] stud_marks[5], stud_grade }. Accept all values from user
for minimum 5 students and print the data.

*/

#include<stdio.h>
#pragma pack(1)

struct Student {
	
	int stud_id;
	char stud_name[20];
	char stud_subjects[10];
	int stud_marks;
	char stud_grade;
};

void main() {

	struct Student stud[5];
	int i;
	
	printf("\nEnter the details of student : ");
	for(i=0;i<3;i++) {
		
		printf("\n\nEnter the student id : ");
		scanf("%d",&stud[i].stud_id);
		printf("\nEnter the name of student : ");
		scanf("%s",stud[i].stud_name);
		printf("\nEnter the subject name : ");
		scanf("%s",stud[i].stud_subjects);
		printf("\nEnter the marks : ");
		scanf("%d",&stud[i].stud_marks);
		printf("\nEnter the grade : ");
		scanf(" %c",&stud[i].stud_grade);
	} 
	
	printf("\nStudent Details\n");
	printf("\nRoll_no\tName\t\tSubject\tMarks\tGrade\n");
	printf("------------------------------------------------------------\n");
	for(i=0;i<3;i++) {
		printf("\n%d\t%s\t\t%s\t%d\t%c",stud[i].stud_id,stud[i].stud_name,stud[i].stud_subjects,stud[i].stud_marks,stud[i].stud_grade);
	}
	
	printf("\n");
}


/*
OUTPUT : 

*/
