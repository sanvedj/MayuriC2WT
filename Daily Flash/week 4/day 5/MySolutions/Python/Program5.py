print("\n ------- Pattern ------- \n\n")

for i in range(4):
	val=1
	for j in range(4):
		if( i==j ):
			print("   =",end=" ")
			val=val+1
		else:
			print("  ",val,end=" ")
			val=val+1
		
	print("\n")	
	
	
'''

Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 5/MySolutions/Python$ python3 Program5.py

 ------- Pattern ------- 


   =    2    3    4 

   1    =    3    4 

   1    2    =    4 

   1    2    3    = 


'''	
	
		

