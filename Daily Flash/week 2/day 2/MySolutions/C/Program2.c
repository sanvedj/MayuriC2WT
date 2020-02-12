/*
Problem Statment : 

Program 2 : Write a Program t o print cube of first 20 numbers .

*/

#include<stdio.h>

void main() {

	printf("\nCube of first 20 numbers is : \n");
	
	for(int i=1;i<=20;i++) 
		printf("Cube of %d  is :%5d\n",i,i*i*i);

}

/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 2/MySolutions/C$ ./a.out

Cube of first 20 numbers is : 
Cube of 1  is :    1
Cube of 2  is :    8
Cube of 3  is :   27
Cube of 4  is :   64
Cube of 5  is :  125
Cube of 6  is :  216
Cube of 7  is :  343
Cube of 8  is :  512
Cube of 9  is :  729
Cube of 10  is : 1000
Cube of 11  is : 1331
Cube of 12  is : 1728
Cube of 13  is : 2197
Cube of 14  is : 2744
Cube of 15  is : 3375
Cube of 16  is : 4096
Cube of 17  is : 4913
Cube of 18  is : 5832
Cube of 19  is : 6859
Cube of 20  is : 8000

*/
