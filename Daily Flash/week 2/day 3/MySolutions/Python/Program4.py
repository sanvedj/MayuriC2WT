'''
Problem Statement : 

Program 4: Write a Program to simulate simple calculator. Accept two integers from user and sign of operation to perform.

Input:
Enter First Number: 10
Enter Second Number: 20
Enter the sign of Operation: +

Output: Addition of 10 & 20 is 30.


'''

x=int(input("\nEnter first number : "))
y=int(input("\nEnter second number : "))


s=input("\nEnter sign of operation : ")

if(s=='+'):
	print("\nAddtion is : ",x+y)
	

if(s=='*'):
	print("\nMultiplication is : ",x*y)
		
	
if(s=='/'):
	if(x>y):
		print("Division : ",x/y)	
	else:
		print("Division : ",y/x)	


if(s=='-'):
	if(x>=y):
		print("\nSubstraction is : ",x-y)	
	else:
		print("\nSubstraction is : ",y-x)	

if(s=='**'):
	print("\nExponential operation is : ",x**y)
		


'''

Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 3/MySolutions/Python$ python3 Program4.py

Enter first number : 10

Enter second number : 5

Enter sign of operation : *

Multiplication is :  50


'''
