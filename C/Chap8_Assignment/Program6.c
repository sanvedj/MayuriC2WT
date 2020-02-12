/*
Problem Statement : 

Write a program in C to ask basic info of the user (Name , Age ,Gender ,School ) and
store the info into the file in a proper format .

*/


#include<stdio.h>
#include<stdlib.h>

void main() {

	FILE *fp;
	char name[10],gender[10],school[20];
	int age,i,n;
	
	fp=fopen("student.txt","w");
	
	if(fp==NULL) {
		
		printf("\n Unable to open the file \n");
		exit(1);
	} else {
	
		printf("\nEnter the number of records : ");
		scanf("%d",&n);
		
		fprintf(fp,"\nName\tGender\t\tAge\tSchool\n\n");
		for(i=0;i<n;i++) {
			printf("\nEnter the name of student : ");
			scanf("%s",name);
			printf("Enter the gender of student : ");
			scanf("%s",gender);
			printf("Enter the name of school : ");
			scanf("%s",school);
			printf("Enter the age of student : ");
			scanf("%d",&age);
			
			fprintf(fp,"%s\t%s\t\t%d\t%s\n",name,gender,age,school);
		}
	}
	
	
	
	fclose(fp);

}

/*
Output : 


mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ gcc Program6.c 
mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ ./a.out

Enter the number of records : 3

Enter the name of student : Mayuri
Enter the gender of student : Female
Enter the name of school : SSDS
Enter the age of student : 21

Enter the name of student : Swaraj
Enter the gender of student : Male
Enter the name of school : DonBosco
Enter the age of student : 20

Enter the name of student : Shivani 
Enter the gender of student : Female
Enter the name of school : KVDIT
Enter the age of student : 21
mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ cat student.txt

Name	Gender		Age	School

Mayuri	Female		21	SSDS
Swaraj	Male		20	DonBosco
Shivani	Female		21	KVDIT

*/
