#include<stdio.h>

typedef struct student {

	int roll_no;
	char * name;
	
}Student;

Student s1= {1,"Mayuri"};

void fun(Student * obj) {

	printf("%d\n",obj->roll_no);
	printf("%s\n\n",obj->name);
	
}
