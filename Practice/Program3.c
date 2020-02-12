#include<stdio.h>


typedef struct Student {

	int roll_no;
	char * name;
	
}Student;

Student s1= {1,"Mayuri"};

void fun(Student * obj) {

	printf("\n.c File \n");
	printf("%d\n",obj->roll_no);
	printf("%s\n",obj->name);
	
}
