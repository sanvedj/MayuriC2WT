/*
Problem Statement :
Program 3: Write a Program to that skips the occurrence of numbers that are
divisible by 2 using continue statement. Print this sequence up to 100.
Output: 1 3 5 7 9 11 13

*/


#include<stdio.h>

void main() {

	printf("\nNumbers that are not divisble by 2 are : \n\n");
	for(int i=1;i<=100;i++) {
		
		if(  i%2 == 0)
			continue;
		
		printf("%d  ",i);	
	}
	
	printf("\n\n");
}



/*
Output :


(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/C$ cc Program3.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/C$ ./a.out

Numbers that are not divisble by 2 are : 

1  3  5  7  9  11  13  15  17  19  21  23  25  27  29  31  33  35  37  39  41  43  45  47  49  51  53  55  57  59  61  63  65  67  69  71  73  75  77  79  81  83  85  87  89  91  93  95  97  99  


*/
