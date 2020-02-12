print("\nPrime or not")

def prime(num):
	
	for i in range(2,num//2):
		if( num%i == 0 ):
			return 0
			
	
	return 1		



n=int(input("\nEnter a number : "))
ret=prime(n)

if(ret==0):
	print("\n",n,"is not a prime number \n")
else:	
	print("\n",n,"is a prime number \n")


'''

Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 5/MySolutions/Python$ python3 Program1.py

Prime or not

Enter a number : 17

 17 is a prime number 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 5/MySolutions/Python$ python3 Program1.py

Prime or not

Enter a number : 24

 24 is not a prime number 



'''
