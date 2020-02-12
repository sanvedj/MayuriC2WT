/*
Problem Statement :

Program 3: Write a Program to Convert enter distance in feet to centimetres.
Input: Distance in Feet: 6ft
Output: Equivalent distance for 6ft in cm is 180cm.

*/

#include<stdio.h>

void main() {
	
	float feet;
	
	printf("\nEnter distance in feet : ");
	scanf("%f",&feet);
	
	printf("\nEquivalent distance for %f ft in cm is %f cm \n\n",feet,feet*30);
}


/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/C$ cc Program3.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/C$ ./a.out

Enter distance in feet : 6

Equivalent distance for 6.000000 ft in cm is 180.000000 cm 


*/
