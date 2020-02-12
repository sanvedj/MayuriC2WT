print("\n  Binary to Decimal\n")

num=int(input("\nEnter a binary number : "))
ans=0
n=1
temp=0

for i in range(num+1):
	temp=num %10
	num= num//10
	
	if(temp == 1):
		ans=ans+n
	
	n=n*2
	
print("\nDecimal number : ",ans)
print()			

'''
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/Python$ python3 Program2.py

  Binary to Decimal


Enter a binary number : 1111

Decimal number :  15

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/Python$ python3 Program2.py

  Binary to Decimal


Enter a binary number : 101

Decimal number :  5
'''
