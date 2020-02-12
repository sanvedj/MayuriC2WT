
print("\n  ----- Pattern ------  \n")
num=0
val=1
for i in reversed(range(4)):
	num=0
	for j in range(0,i+1):
		print(end="   ")
		num=num+1
	
	for k in range(val):
		print(num,end="  ")
		num=num+1
	
	val=val+1
	print()	
			
			
'''
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/Python$ python3 Program5.py

  ----- Pattern ------  

            4  
         3  4  
      2  3  4  
   1  2  3  4  



'''			
