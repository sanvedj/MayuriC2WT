#include<stdio.h>


void main () {

	char student[10][20];
	int marks [10],n,i,high=0,count=0;
	
	printf("\nEnter number of students : ");
	scanf("%d",&n);
	
	printf("\nEnter name and marks : ");
	for(i=0;i<n;i++) {
		scanf("%s %d",student+i,&marks[i]);
	}
	
	for(i=0;i<n;i++) {
	
		if(marks[i]>high)
		{
			high=marks[i];
			count=i;
		}
	}
	
	printf("\nStudent %s has highest marks %d \n",student+count,high);
}

