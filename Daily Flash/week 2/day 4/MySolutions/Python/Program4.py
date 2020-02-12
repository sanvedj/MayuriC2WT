'''
Problem Statement : 

Program 4: Write a Program to Print following Pattern
*
* *
* * *
* * * *


'''


print("\n ----- Pattern 4 ----- \n")

for i in range(4):
	for j in range(0,i+1):
		print(" *",end=" ")
	print()

print()



'''
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 4/MySolutions/Python$ python3 Program4.py

 ----- Pattern 4 ----- 

 * 
 *  * 
 *  *  * 
 *  *  *  * 



'''
