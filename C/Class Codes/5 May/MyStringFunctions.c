//Menu-driven program for string functions

#include<stdio.h>
#include<stdlib.h>

int stringLength(const char *str) {

	int count=0;
	while( *str != '\0' ) {
	
		count ++;
		str ++;
	}
	return count;
}


char * stringCopy(char *str1,const char *str) {

	while(*str != '\0') {
	
		*str1 = *str;
		str++;
		str1++;
	}
	return str1;
}


char * stringConcatenate(char *str,char *str1)
{
	while( *str != '\0' )
		str++;
		
	while( *str1 != '\0' ) {
		
		*str = *str1;
		str++;
		str1++;
	}
	
	*str='\0';
	return str;
}

int stringCompare(const char * str1,const char * str2) {
	
	while( *str1 != '\0' ) {
	
		if( *str1 == *str2 )
		{
			str1++;
			str2++;
		}
		else
			return *str1-*str2;
	}
	return 1;
}

int stringCaseCompare(const char *str1,const char *str2) {

	while( *str1 != '\0' ) {
	
		if( *str1 == *str2 || *str1-*str2 == -32 || *str1-*str2 == 32) {
			str1++;
			str2++;
		}
		else
			return *str1-*str2;
	}
	return 1;
}


char * stringReverse( char * str ) {

	char *temp=str;
	char t;
	
	while ( *str != '\0' )
		str++;
	
	str--;
	
	while ( temp < str ) {
	
		t=*temp;
		*temp=*str;
		*str=t;
		
		str--;
		temp++;
	}	

}

char * stringToLower(char *str) {

	while( *str != '\0') {
	
		if ( *str >= 65 && *str <= 90 )
			*str = *str + 32 ;
			
		str++;	
	}
	return str;
}


char * stringToUpper( char* str ) {

	while( *str != '\0' ) {
		
		if( *str >= 97 && *str <=122 )
			*str = *str - 32;
		
		str++;	
	}
	
	return str;
}

char * stringNCopy(char *str , const char *str1 , int n )
{
	while ( n>0 ) {
		
		*str=*str1;
		str++;
		str1++;
		n--;
	}
	
	return str;
}

char * stringSet( char *str ,char ch ) {

	while ( *str != '\0' ) {
		
		*str=ch;
		str++;
	}
	
	return str;
}

void main() {
	
	char str1[30],str2[30],str3[30],str4[30],ch;
	int flag,n,choice;
	
	while(1)
	{
		printf("\n1.String Length\n2.String Copy\n3.String Concatenation\n4.String Compare\n5.String Case-Compare\n6.String Reverse\n7.Convert to Lower\n8.Convert to Upper\n9.String N-Copy\n10.String Set\n11.Exit\n\nEnter your choice : ");
		scanf("%d",&choice);
		
		switch(choice) {
		
			case 1:
				printf("\nEnter a string : ");
				scanf("%s",str1);
				printf("\n\tThe length of string %s is : %d\n",str1,stringLength(str1));
			break;
			
			case 2:
				stringCopy(str3,str1);
				printf("\n\tThe string after copying is : %s \n",str3);
			break;
			
			case 3 :
				printf("\nEnter the first string : ");
				scanf("%s",str1);
				printf("\nEnter the second string : ");
				scanf("%s",str2);
				stringConcatenate(str1,str2);
				printf("\n\tAfter concatenation string is : %s\n",str1);
			break;
			
			case 4 :
				printf("\nEnter the first string : ");
				scanf("%s",str1);
				printf("\nEnter the second string : ");
				scanf("%s",str2);
				
				if(stringLength(str1)!=stringLength(str2))
					printf("\n\tBoth strings have different length\n");
				else {
				
					flag=stringCompare(str1,str2);
					if(flag==1)
						printf("\n\tStrings are equal..!!\n");
					else
						printf("\n\tStrings are not equal..!!\n");
						
				}	
			break;			
				
			case 5 :
				printf("\nEnter the first string : ");
				scanf("%s",str1);
				printf("\nEnter the second string : ");
				scanf("%s",str2);
				
				if(stringLength(str1)!=stringLength(str2))
					printf("\n\tBoth strings have different length\n");
				else {
				
					flag=stringCaseCompare(str1,str2);
					if(flag==1)
						printf("\n\tStrings are equal..!!\n");
					else
						printf("\n\tStrings are not equal..!!\n");
						
				}	
			break;	
			
			case 6 :
				printf("\nEnter a string to be reversed : ");
				scanf("%s",str1);		
				stringReverse(str1);
				printf("\n\tReversed string is : %s\n",str1);
			break;	
			
			case 7 :
				printf("\nEnter a string : ");
				scanf("%s",str1);
				stringToLower(str1);
				printf("\n\tAfter converting to lower case : %s \n",str1);
			break;
			
			case 8 :
				printf("\nEnter a string : ");
				scanf("%s",str1);
				stringToUpper(str1);
				printf("\n\tAfter converting to upper case : %s \n",str1);
			break;
			
			case 9 :
				printf("\nEnter a string : ");
				scanf("%s",str1);
				printf("\nEnter the no. of alphabets to copy : ");
				scanf("%d",&n);
				stringNCopy(str4,str1,n);
				printf("\n\tOriginal string : %s ",str1);
				printf("\n\tCopied string   : %s \n",str4);
			break;
			
			case 10 :
				printf("\nEnter a string : ");
				scanf("%s",str1);
				printf("\nEnter the character : ");
				scanf(" %c",&ch);
				stringSet(str1,ch);
				printf("\n\tAfter set operation string is : %s\n",str1);
			break;
			
			case 11 : exit(0);
		}	
	}
}


/*
OUTPUT : 


mayuri@snowflake:~/C2WT/ClassCodes/5May$ gcc MyStringFunctions.c
mayuri@snowflake:~/C2WT/ClassCodes/5May$ ./a.out

1.String Length
2.String Copy
3.String Concatenation
4.String Compare
5.String Case-Compare
6.String Reverse
7.Convert to Lower
8.Convert to Upper
9.String N-Copy
10.String Set
11.Exit

Enter your choice : 1

Enter a string : mayuri

	The length of string mayuri is : 6

1.String Length
2.String Copy
3.String Concatenation
4.String Compare
5.String Case-Compare
6.String Reverse
7.Convert to Lower
8.Convert to Upper
9.String N-Copy
10.String Set
11.Exit

Enter your choice : 2

	The string after copying is : mayuri 

1.String Length
2.String Copy
3.String Concatenation
4.String Compare
5.String Case-Compare
6.String Reverse
7.Convert to Lower
8.Convert to Upper
9.String N-Copy
10.String Set
11.Exit

Enter your choice : 3

Enter the first string : mayuri

Enter the second string : nanaware

	After concatenation string is : mayurinanaware

1.String Length
2.String Copy
3.String Concatenation
4.String Compare
5.String Case-Compare
6.String Reverse
7.Convert to Lower
8.Convert to Upper
9.String N-Copy
10.String Set
11.Exit

Enter your choice : 4

Enter the first string : mayuri

Enter the second string : mayuri

	Strings are equal..!!

1.String Length
2.String Copy
3.String Concatenation
4.String Compare
5.String Case-Compare
6.String Reverse
7.Convert to Lower
8.Convert to Upper
9.String N-Copy
10.String Set
11.Exit

Enter your choice : 4

Enter the first string : mayuri

Enter the second string : shivani

	Both strings have different length

1.String Length
2.String Copy
3.String Concatenation
4.String Compare
5.String Case-Compare
6.String Reverse
7.Convert to Lower
8.Convert to Upper
9.String N-Copy
10.String Set
11.Exit

Enter your choice : 5

Enter the first string : Shivani

Enter the second string : SHIVANI

	Strings are equal..!!

1.String Length
2.String Copy
3.String Concatenation
4.String Compare
5.String Case-Compare
6.String Reverse
7.Convert to Lower
8.Convert to Upper
9.String N-Copy
10.String Set
11.Exit

Enter your choice : 6

Enter a string to be reversed : shivani

	Reversed string is : inavihs

1.String Length
2.String Copy
3.String Concatenation
4.String Compare
5.String Case-Compare
6.String Reverse
7.Convert to Lower
8.Convert to Upper
9.String N-Copy
10.String Set
11.Exit

Enter your choice : 7

Enter a string : MAYURI

	After converting to lower case : mayuri 

1.String Length
2.String Copy
3.String Concatenation
4.String Compare
5.String Case-Compare
6.String Reverse
7.Convert to Lower
8.Convert to Upper
9.String N-Copy
10.String Set
11.Exit

Enter your choice : 8

Enter a string : shivani

	After converting to upper case : SHIVANI 

1.String Length
2.String Copy
3.String Concatenation
4.String Compare
5.String Case-Compare
6.String Reverse
7.Convert to Lower
8.Convert to Upper
9.String N-Copy
10.String Set
11.Exit

Enter your choice : 9

Enter a string : Mayuri

Enter the no. of alphabets to copy : 4

	Original string : Mayuri 
	Copied string   : Mayu 

1.String Length
2.String Copy
3.String Concatenation
4.String Compare
5.String Case-Compare
6.String Reverse
7.Convert to Lower
8.Convert to Upper
9.String N-Copy
10.String Set
11.Exit

Enter your choice : 10

Enter a string : Shivani

Enter the character : a

	After set operation string is : aaaaaaa

1.String Length
2.String Copy
3.String Concatenation
4.String Compare
5.String Case-Compare
6.String Reverse
7.Convert to Lower
8.Convert to Upper
9.String N-Copy
10.String Set
11.Exit

Enter your choice : 11

*/
