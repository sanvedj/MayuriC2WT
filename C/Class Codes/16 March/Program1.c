/*
   Pattern 
*/

#include<stdio.h>
void main()
{
	int i,j,k;
	
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("* ");
		}
		printf("\n");	
	}
	
	printf("\n");
	
	int val=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",val++);
		}
		printf("\n");	
	}
	
	
	printf("\n");
	
	val=65;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c  ",val++);
		}
		printf("\n");	
	}
	
	
	printf("\n");
	
	val=97;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c  ",val);
			val=val+2;
		}
		printf("\n");	
	}
	
	
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");	
	}
	
	printf("\n");
	
	val=97;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c  ",val++);
			
		}
		printf("\n");	
	}
	
	
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=3;j>i;j--)
		{
			printf("* ");
		}
		printf("\n");	
	}
	
	printf("\n");	


	val=1;
	for(i=0;i<3;i++)
	{
		for(j=3;j>i;j--)
		{
			printf("%d ",val++);
		}
		printf("\n");	
	}
	
	printf("\n");

	for(i=1;i<=4;i++)
	{
		for(j=3;j>=i;j--)
		{
			printf("=  ");
		}
		for(j=1;i>j;j++)
		{
			printf("*  ");
		}
		printf("\n");
	}
	
	printf("\n");


	for(i=1;i<=4;i++)
	{
		for(j=3;j>=i;j--)
		{
			printf("  ");
		}
		for(j=1;i>j;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	val=1;
	for(i=1;i<=4;i++)
	{
		for(j=3;j>=i;j--)
		{
			printf("    ");
		}
		for(j=1;i>j;j++)
		{
			printf("%d   ",val++);
			val++;
		}
		printf("\n");
	}
	
	printf("\n");
	

	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(i%3==0 && j%3==0)
				printf("=  ");
			else
				printf("*  ");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=1;i<=5;i++)
	{
		
		if(i<=3)
		{
			for(j=3;j>=i;j--)
			{
				printf("*  ");
			}
		}
		else
		{
			for(j=3;j<=i;j++)
			{
				printf("*  ");
			}
		}
		
		printf("\n");
	}
	
	
	printf("\n");
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(i==j)
				printf("=  ");
			else	
				printf("*  ");
		}
	
		printf("\n");
	}
	
}



/*

OUTPUT 



* * * 
* * * 
* * * 

1  2  3  
4  5  6  
7  8  9  

A  B  C  
D  E  F  
G  H  I  

a  c  e  
g  i  k  
m  o  q  

* 
* * 
* * * 

a  
b  c  
d  e  f  

* * * 
* * 
* 

1 2 3 
4 5 
6 

=  =  =  
=  =  *  
=  *  *  
*  *  *  

      
    * 
  * * 
* * * 

            
        1   
    3   5   
7   9   11   


=  *  *  =  
*  *  *  *  
*  *  *  *  
=  *  *  =  


*  *  *  
*  *  
*  
*  *  
*  *  *  


=  *  *  
*  =  *  
*  *  =  


*/
