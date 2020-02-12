

print("\n ------- Prime or Not ------- \n")

flag=0
num=int(input("\nEnter a number : "))

for i in range (2,num):
	if( num % i == 0):
		flag=1

print()

if(flag==1):
	print(num,"is not a prime number \n");		
else:	
	print(num,"is a prime number \n");		


'''
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/Python$ python3 Program1.py 

 ------- Prime or Not ------- 


Enter a number : 11

11 is a prime number 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/Python$ python3 Program1.py 

 ------- Prime or Not ------- 


Enter a number : 16

16 is not a prime number 



'''
