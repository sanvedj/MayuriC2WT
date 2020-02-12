
print("\nBinary to Octal :")

def convert(num):
	ans=0
	temp=0
	n=1
	
	for i in range(num+1):
	
		temp=num%10
		num=num//10
		
		if(temp==1):
			ans=ans+n
		
		n=n*2
		
	
	print("Octal Number : ",oct(ans)[2:])		

#[2:]  truncates first two characters of output


num=int(input("\nEnter a binary number : "))
convert(num)

'''
Output :


(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/Python$ python3 Program2.py

Binary to Octal :

Enter a binary number : 1011
Octal Number :  13
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/Python$ python3 Program2.py

Binary to Octal :

Enter a binary number : 1000
Octal Number :  10

'''
