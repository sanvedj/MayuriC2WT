/*
For Loop and While Loop
*/

#include<stdio.h>

void main(){

	int i;
	printf("\n\t ---------  For Loop  ---------- \n");
	
	printf("\nDisplay numbers from 1 to 10\n\n");
	
	for(i=1;i<=10;i++)
		printf("%d\t",i);
		
		
	printf("\n\n\nDisplay multiplication of numbers from 1 to 10\n\n");
	
	for(i=1;i<=10;i++)
		printf("%d\t",i*i);
		
		
	printf("\n\n\nDisplay numbers (1 to 10) divisible by 2 (* if not)\n\n");
	
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
			printf("%d\t",i);
		else
			printf("*\t");
	}
	
	printf("\n\n\nDisplay numbers (60 to 80) divisible by 2 (* if not)\n\n");
	
	for(i=80;i>=60;i--)
	{
		if(i%2==0)
			printf("%d\t",i);
		else
			printf("*\t");
	}
	
	
	printf("\n\n\nDisplay numbers (1 to 50) divisible by 7 \n\n");
	
	for(i=1;i<=50;i++)
	{
		if(i%7==0)
			printf("%d\t",i);
	}
	
	
	printf("\n\n\nDisplay numbers (20 to 70) divisible by both 4 and 5 \n\n");
	
	for(i=20;i<=70;i++)
	{
		if((i%4==0) && (i%5==0))
			printf("%d\t",i);
	}
	
	
	printf("\n\n\nDisplay numbers (1 to 50) divisible by 5 and not by 2 \n\n");
	
	for(i=1;i<=50;i++)
	{
		if((i%2!=0) && (i%5==0))
			printf("%d\t",i);
	}
	
	
	
	
	
	
	printf("\n\n\n\t ---------  While Loop  ---------- \n");
	
	printf("\nDisplay numbers from 1 to 10\n\n");
	
	i=1;
	while(i<=10)
	{
		printf("%d\t",i);
		i++;
	}	
	
	
	printf("\n\n\nDisplay multiplication of numbers from 1 to 10\n\n");
	i=1;
	while(i<=10)
	{
		printf("%d\t",i*i);
		i++;	
	}	
	
	
	printf("\n\n\nDisplay numbers (1 to 10) divisible by 2 (* if not)\n\n");
	i=1;
	while(i<=10)
	{
		if(i%2==0)
			printf("%d\t",i);
		else
			printf("*\t");
			
		i++;	
	}
	
	
	
	printf("\n\n\nDisplay numbers (60 to 80) divisible by 2 (* if not)\n\n");
	i=80;
	while(i>=60)
	{
		if(i%2==0)
			printf("%d\t",i);
		else
			printf("*\t");
			
		i--;	
	}
	
    
	printf("\n\n\nDisplay numbers (1 to 50) divisible by 7 \n\n");
	i=1;
	while(i<=50)
	{
		if(i%7==0)
			printf("%d\t",i);
		i++;	
	}
	
	
	printf("\n\n\nDisplay numbers (20 to 70) divisible by both 4 and 5 \n\n");
	i=20;
	while(i<=70)
	{
		if((i%4==0) && (i%5==0))
			printf("%d\t",i);
		i++;	
	}
	
	
	printf("\n\n\nDisplay numbers (1 to 50) divisible by 5 and not by 2 \n\n");
	i=1;
	while(i<=50)
	{
		if((i%2!=0) && (i%5==0))
			printf("%d\t",i);
		i++;
	}
	
	printf("\n\n");		
}


/*
OUTPUT :

	 ---------  For Loop  ---------- 

Display numbers from 1 to 10

1	2	3	4	5	6	7	8	9	10	


Display multiplication of numbers from 1 to 10

1	4	9	16	25	36	49	64	81	100	


Display numbers (1 to 10) divisible by 2 (* if not)

*	2	*	4	*	6	*	8	*	10	


Display numbers (60 to 80) divisible by 2 (* if not)

80	*	78	*	76	*	74	*	72	*	70	*	68	*	66	*	64	*	62	*	60	


Display numbers (1 to 50) divisible by 7 

7	14	21	28	35	42	49	


Display numbers (20 to 70) divisible by both 4 and 5 

20	40	60	


Display numbers (1 to 50) divisible by 5 and not by 2 

5	15	25	35	45	


	 ---------  While Loop  ---------- 

Display numbers from 1 to 10

1	2	3	4	5	6	7	8	9	10	


Display multiplication of numbers from 1 to 10

1	4	9	16	25	36	49	64	81	100	


Display numbers (1 to 10) divisible by 2 (* if not)

*	2	*	4	*	6	*	8	*	10	


Display numbers (60 to 80) divisible by 2 (* if not)

80	*	78	*	76	*	74	*	72	*	70	*	68	*	66	*	64	*	62	*	60	


Display numbers (1 to 50) divisible by 7 

7	14	21	28	35	42	49	


Display numbers (20 to 70) divisible by both 4 and 5 

20	40	60	


Display numbers (1 to 50) divisible by 5 and not by 2 

5	15	25	35	45	


*/
