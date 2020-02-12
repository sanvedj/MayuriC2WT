
try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)
if(n < 0):
	exit(0)

for i in range(1, n+1):
	for j in range(0,(n-i)*2 + 1, 2):
			print(chr(64 + i + j), end = "\t")
	print()
