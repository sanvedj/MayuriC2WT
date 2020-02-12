print("\nCubes and Squares : \n")

x=int(input("\nEnter the range : "))


print("\n\tNumber\tSquare\tCube\n")

for i in range(1,x+1):
	if( i%2 != 0):
		print("\t",i,"\t",i*i,"\t",i*i*i,"\n")
	
	
		
'''
Output :
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 5/MySolutions/Python$ python3 Program3.py

Cubes and Squares : 


Enter the range : 10

	Number	Square	Cube

	 1 	 1 	 1 

	 3 	 9 	 27 

	 5 	 25 	 125 

	 7 	 49 	 343 

	 9 	 81 	 729 

'''
