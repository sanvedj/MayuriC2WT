'''
Problem Statement : 

Program 2: Write a program that accepts two integers from user and prints multiplication & Division of them.
{Note: checks for smaller divisor amongst entered number while computingdivision}

Input: 10 20

Output:
Multiplication is 200
Division is 2

'''

x,y=input("\nEnter two numbers : ").split()

x=int(x)
y=int(y)

print("\nMultiplication : ",x*y)

if(x>y):
	print("Division : ",x/y)	
else:
	print("Division : ",y/x)	

print()





'''

Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 3/MySolutions/Python$ python3 Program2.py

Enter two numbers : 10 20

Multiplication :  200
Division :  2.0


'''
