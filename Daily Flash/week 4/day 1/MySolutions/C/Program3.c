/*
Problem Statement :

Program 3: Write a Program to Convert the entered distance in Kilometre by
user into meter.
Input: Enter Distance in KM: 1
Output: 1 KM is equal to 1000m
*/

#include<stdio.h>

void main() {

	int km;
	printf("\nEnter distance in km : ");
	scanf("%d",&km);
	
	printf("%d km  is equal to  %d m\n",km,km*1000);
	
}


/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/C$ cc Program3.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/C$ ./a.out

Enter distance in km : 1
1 km  is equal to  1000 m


*/
