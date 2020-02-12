'''
Problem Statement : 


Program 1: Write a Program to Print following Pattern

1
2 2
3 3 3
4 4 4 4

'''
print("\n  ------  Pattern 1 ------ \n")
for i in range(1,5):
	for j in range(0,i):
		print(i,end=" ")
	print()

print()


'''
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 4/MySolutions/Python$ python3 Program1.py

  ------  Pattern 1 ------ 

1 
2 2 
3 3 3 
4 4 4 4 



'''
