// Operations on Array

#include<stdio.h>

void insert(int num) {

} 

void main() {

	int arr[100]={},n,i,ch;
	
	while(1) {
	
		printf("\n\nInsert\nSearch\nDelete\nUpdate\nExit");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		
		switch(ch) {
		 
			case 1 :
				int num;
				printf("\n---------- Inserting element into array -----------\n");
			l1 :    printf("\nEnter the number of elements to be inserted : ");
				scanf("%d",&num);
				
				if(num>n) {
					printf("\nElements should be small than size of array!! ");
					goto l1;
				}else {
					insert(num);
					n=n+num;
				}
				
			break;	
		}
	}
}
