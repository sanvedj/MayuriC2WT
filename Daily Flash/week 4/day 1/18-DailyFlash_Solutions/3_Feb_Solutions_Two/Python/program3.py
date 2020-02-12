
try:
	n = int(input("Enter KM : "))
except ValueError as e:
	exit(0)

if(n < 0):
	exit(0)
print(n,"KM is equal to ", n * 1000, "m")
