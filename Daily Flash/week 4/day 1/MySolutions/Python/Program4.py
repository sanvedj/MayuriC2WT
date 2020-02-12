

print("\n   --------- Pattern -----------     \n")

char=65
n=1
for i in range(4):
	for j in range(i,4):
		print("  ",chr(char),end=" ")
		char = char + 2
	
	char = 65 + n	
	n=n+1
	print("\n")		
	
'''
Output :



(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/Python$ python3 Program4.py 

   --------- Pattern -----------     

   A    C    E    G 

   B    D    F 

   C    E 

   D 


'''	
