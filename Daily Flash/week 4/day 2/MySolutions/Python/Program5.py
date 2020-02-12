print("\n Sum of all divisors \n")

num=int(input("\nEnter a number : "))
sum=0

for i in range(1,num):
	if( num%i == 0 ):
		sum=sum+i
		

print("\nSum of all divisors of ", num , " is : ",sum,"\n")




'''
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/Python$ python3 Program5.py

 Sum of all divisors 


Enter a number : 24

Sum of all divisors of  24  is :  36 


'''		
