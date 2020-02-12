print("\n     ------  Pattern -------    \n\n")

num=7

for i in reversed(range(4)):
	for j in range(0,i+1):
		print(num,end="   ")
		num=num+7
	print("\n")
	

print()		

'''
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/Python$ python3 Program4.py

     ------  Pattern -------    


7   14   21   28   

35   42   49   

56   63   

70   





'''
