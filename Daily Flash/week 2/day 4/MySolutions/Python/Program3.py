'''
Problem Statement : 

Program 3: Write a Program to Print following Pattern

1
2 3
4 5 6
7 8 9 10


'''

print("\n  --------  Pattern 3 -------- \n")
num=1;

for i in range(1,5):
	for j in range(0,i):
		print(num,end=" ")
		num=num+1
	print()

print()



'''
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 4/MySolutions/Python$ python3 Program3.py

  --------  Pattern 3 -------- 

1 
2 3 
4 5 6 
7 8 9 10 


'''
