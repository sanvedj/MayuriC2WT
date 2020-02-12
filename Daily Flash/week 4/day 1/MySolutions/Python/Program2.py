

print("\n  ----------   Convert Binary to Hexadecimal  ---------\n")

num=int(input("\nEnter a binary number  : "))

temp=0
n=1
ans=0

for i in range(1,num):
	temp=num % 10
	num=num//10	

	if(temp==1):
		ans=ans+n
		
	n=n*2



print("\nHexadecimal number is ::  " ,hex(ans).lstrip("0x").rstrip("L") , "\n")					

# lstrip helps remove "0x" from the left  
# rstrip helps remove "L" from the right, 
# L represents a long number 


'''
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/Python$ python3 Program2.py 

  ----------   Convert Binary to Hexadecimal  ---------


Enter a binary number  : 1011

Hexadecimal number is ::   b 


'''
