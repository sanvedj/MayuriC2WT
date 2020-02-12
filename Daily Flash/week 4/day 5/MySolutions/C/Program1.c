#include<stdio.h>

int prime(int num) {

	for(int i=2;i<num/2;i++) {
		
		if(num % i == 0)
			return 0; 
	}
	return 1;
}

void main() {

	int num;
	printf("\nPrime or Not\n");
	printf("\nEnter a number : ");
	scanf("%d",&num);
	
	if(prime(num)) 
		printf("\n%d is a prime number \n\n",num);
	else
		printf("\n%d is not a prime number \n\n",num);	
 
}


/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 5/MySolutions/C$ cc Program1.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 5/MySolutions/C$ ./a.out

Prime or Not

Enter a number : 53

53 is a prime number 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 5/MySolutions/C$ ./a.out

Prime or Not

Enter a number : 46

46 is not a prime number 


*/
