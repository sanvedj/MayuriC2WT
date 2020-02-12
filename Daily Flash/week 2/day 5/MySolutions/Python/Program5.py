
x=int(input("\nEnter the number : "))
print("\nPerfect Divisors of " , x,"are : \n")

for i in range(1,x):
	if( x%i == 0):
		print(i,end="  ")
		
print()		
	
'''
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 5/MySolutions/Python$ python3 Program5.py

Enter the number : 20  

Perfect Divisors of  20 are : 

1  2  4  5  10  


'''	
		
