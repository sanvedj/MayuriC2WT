
try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)
k = 1
sum = 0
if(n < 0):
	exit(0)
for i in range(1,n+1):
	sum = sum + k * 10
	if(i == n):
		print(k * 10 - 1, end = '')
	else:
		print(k * 10 - 1, '+', end = '')
	k = k * 10
	
print("=", sum - n)
