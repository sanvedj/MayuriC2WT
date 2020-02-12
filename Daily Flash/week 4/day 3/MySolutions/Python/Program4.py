
print("\n      ------ Pattern ------ \n")

ch=97
val=2
for i in reversed(range(4)):
	for j in range(0,i+1):
		print("  ",chr(ch),end=" ")
		ch=ch+1
	
	
	ch=ch-val
	val=val-1	
	print("\n")	
	
'''
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/Python$ python3 Program4.py

      ------ Pattern ------ 

   a    b    c    d 

   c    d    e 

   e    f 

   g 


'''	
