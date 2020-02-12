'''
Problem Statement : 

Program 5: Write a C program to calculate the factorial of a given number.
Input: 5
Output:
The Factorial of 5 is: 120

'''

num= int(input("\nEnter a number : "))
fact=1

for i in range(1,num+1):
	fact=fact*i
	
print("\nFactorial of number",num," is : ",fact)	

'''
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 4/MySolutions/Python$ python3 Program5.py

Enter a number : 5

Factorial of number 5  is :  120



'''
