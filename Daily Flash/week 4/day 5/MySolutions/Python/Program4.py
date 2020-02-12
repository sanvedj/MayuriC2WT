
print("\n  -------- Pattern ---------- \n")

x=4

for i in range(4):
	val=64
	for j in range(x):
		print(end="   ");
		val=val+1
	
	for k in range(0,i+1):
		print(chr(val),end="  ")
		val=val+1
	
	x=x-1
	print("\n")		
	
'''
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 5/MySolutions/Python$ python3 Program4.py

  -------- Pattern ---------- 

            D  

         C  D  

      B  C  D  

   A  B  C  D  

'''	
