
print("\n   ------ Pattern -------  \n")


for i in range(5):
	for j in range(0,i+1):
		if( i % 2 == 0):
			print("   0",end=" ")
		else :
			print("   1",end=" ")
	print("\n")			
		


'''
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 5/MySolutions/Python$ python3 Program4.py

   ------ Pattern -------  

   0

   1   1

   0   0   0

   1   1   1   1

   0   0   0   0   0



'''
