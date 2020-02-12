'''
Problem Statement : 

Program 1: Write a program that accepts two integers from user and prints addition & Subtraction of them.
{Note: checks for greater number to subtracts with while subtracting numbers}

Input: 10 20

Output:
Addition is 20
Subtraction is 10

'''

x,y=input("\nEnter two numbers : ").split()

x=int(x)
y=int(y)

print("\nAddition is : ",x+y)

if(x>=y):
	print("\nSubstraction is : ",x-y)	
else:
	print("\nSubstraction is : ",y-x)	

print()


'''
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 3/MySolutions/Python$ python3 Program1.py

Enter two numbers : 5 10

Addition is :  15

Substraction is :  5

'''
