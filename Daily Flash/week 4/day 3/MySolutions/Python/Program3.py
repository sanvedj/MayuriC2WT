
print("\nSkip the occurrence of numbers that are divisible by 2 : \n")

for i in range(1,101):
	
	if( i%2 == 0 ):
		continue
	print(i,end="  ")
	
print()


'''
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/Python$ python3 Program3.py

Skip the occurrence of numbers that are divisible by 2 : 

1  3  5  7  9  11  13  15  17  19  21  23  25  27  29  31  33  35  37  39  41  43  45  47  49  51  53  55  57  59  61  63  65  67  69  71  73  75  77  79  81  83  85  87  89  91  93  95  97  99 

'''		
