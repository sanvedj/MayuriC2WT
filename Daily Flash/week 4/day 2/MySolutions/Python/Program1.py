
print("\nPrime numbers between 1 to 100 are :: \n")


def prime(num):
	for i in range(2,num//2):
		if(num%i == 0):
			return 1 

	
	return 0	

for i in range(2,100):
	if(prime(i) != 1 ):
		print(i,end="  ")
		
print("\n")



'''
Output :


(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/Python$ python3 Program1.py

Prime numbers between 1 to 100 are :: 

2  3  4  5  7  11  13  17  19  23  29  31  37  41  43  47  53  59  61  67  71  73  79  83  89  97  



'''		
