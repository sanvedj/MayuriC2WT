#include<stdio.h>


typedef struct student {

	int roll_no;
	char * name;
	
}Student;

Student s1= {1,"Mayuri"};

void fun(Student * obj) {

	printf("\n%d",obj->roll_no);
	printf("\n%s",obj->name);
	
}
