

print("\n    --- Sum of series up to the nth entered number  ---  \n")

num=int(input("\nEnter the nth number : "))
ans=0
n=9

print("\nThe sum of : ",end=" ")

for i in range(1,num+1):
	ans=ans+n
	print(n,end=" + ")
	n=n*10 + 9
	
print("is = ",ans , "\n")	


'''
Output ::


(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/Python$ python3 Program5.py 

    --- Sum of series up to the nth entered number  ---  


Enter the nth number : 5

The sum of :  9 + 99 + 999 + 9999 + 99999 + is =  111105 
 
'''	
