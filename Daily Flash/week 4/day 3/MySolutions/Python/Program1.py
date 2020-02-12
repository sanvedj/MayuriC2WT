

print("\nFibonacci series upto 5 : \n")

def fibo(num):
	a=0
	b=1
	c=0
	
	print(a,b,end=" ")
	
	for i in range(num-2):
		c=a+b
		print(c,end=" ")
		a=b
		b=c	
	

fibo(5)
print("\n")



'''
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/Python$ python3 Program1.py

Fibonacci series upto 5 : 

0 1 1 2 3 

'''
