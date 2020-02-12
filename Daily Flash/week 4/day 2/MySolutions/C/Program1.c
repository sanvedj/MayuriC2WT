/*
Problem Statement :

Program 1: Write a Program to that prints series of Prime number ranging
between 1 to 100.
Output: 1 2 3 5 . . .

*/

#include<stdio.h>

int prime(int num) {

	for(int i=2;i<= num/2 ;i++) {
	
		if(num%i == 0) 
			return 1;
		
	}
	
	return 0;
}

void main() {

	printf("\nPrime numbers from 1 to 100 are  :: \n\n");

	for(int i=2;i<100;i++) {
	
		if(!prime(i)) 
			printf(" %d ",i);
	}	

	printf("\n");
}


/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/C$ cc Program1.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/C$ ./a.out

Prime numbers from 1 to 100 are  :: 

 2  3  5  7  11  13  17  19  23  29  31  37  41  43  47  53  59  61  67  71  73  79  83  89  97 


*/
