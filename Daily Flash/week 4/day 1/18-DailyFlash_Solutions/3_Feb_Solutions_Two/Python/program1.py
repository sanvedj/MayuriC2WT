try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)

if(n < 0):
	exit(0)
flag = 0
for i in range(2, n//2 + 1):	
	if(n % i == 0 ):
		print("Not prime Number")
		flag = 1
		break
if(flag == 0):
	print("Prime Number")
	

