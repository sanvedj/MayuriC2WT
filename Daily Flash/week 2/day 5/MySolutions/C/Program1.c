/*
Problem Statement :

Program 1: Write a Program to print all the numbers ranging between 1 to 100
that are divisible by 3 or 5.
Output: 3 5 6 9 10 . . .. 99 100.

*/

#include<stdio.h>

void main() {

	printf("\nNumbers divisible by 3 or 5 : \n\n");
	for(int i=1;i<=100;i++) {
		
		if(i%3==0 || i%5==0) 
			printf(" %d ",i);
	}

	printf("\n");
}

/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 5/MySolutions/C$ cc Program1.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 5/MySolutions/C$ ./a.out

Numbers divisible by 3 or 5 : 

 3  5  6  9  10  12  15  18  20  21  24  25  27  30  33  35  36  39  40  42  45  48  50  51  54  55  57  60  63  65  66  69  70  72  75  78  80  81  84  85  87  90  93  95  96  99  100 

*/
