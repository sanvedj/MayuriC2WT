/*
Problem Statement :

Program 3: Write a Program to print Cubes and Squares of all Odd numbers
ranges between given input number.
Input: 10
Output:
Cube of 1 : 1 and Square of 1 :1
Cube of 3 : 27 and Square of 3 :9
.
.
Cube of 9 : 729 and Square of 9 : 81

*/

#include<stdio.h>

void main() {

	int num;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	
	printf("\n\tNumber\tSquare\tCube\n");
	for(int i=0;i<=num;i++) {
	
		if(i%2 != 0) {
		
			printf("\n\t%d\t%2d\t%3d",i,i*i,i*i*i);
		}
	}
	
	printf("\n");

}

/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 5/MySolutions/C$ cc Program3.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 5/MySolutions/C$ ./a.out

Enter the number : 10

	Number	Square	Cube

	1	 1	  1
	3	 9	 27
	5	25	125
	7	49	343
	9	81	729


*/
