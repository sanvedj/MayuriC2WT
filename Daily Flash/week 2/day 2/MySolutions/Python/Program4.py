'''
Program 4: Write a Program that accepts an integer from user and print table
of that number.

'''

n=int(input("\nEnter a number : "))
print("\nTable of",n,"is\n")

for i in range(1,11):
	print(i*n,end=" ")
	
print()	


'''
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 2/MySolutions/Python$ python3 Program4.py 

Enter a number : 7

Table of 7 is

7 14 21 28 35 42 49 56 63 70 



'''
