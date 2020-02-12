'''
Problem Statement : 

Program 3: Write a program that accepts two integers from user and prints addition of their Cubes and subtraction of their Squares.

Input: 10 20

Output:
Addition of 1000 & 8000 is 9000
Subtraction of 100 & 400 is -300

'''

x,y=input("\nEnter two numbers : ").split()

x=int(x)
y=int(y)

x1=x*x*x
y1=y*y*y

print("Addition of ",x1,"and",y1,"is : ",x1+y1)
print("Substraction of ",x*x,"and",y*y,"is : ",(x*x)-(y*y))



'''

Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 3/MySolutions/Python$ python3 Program3.py

Enter two numbers : 10 20
Addition of  1000 and 8000 is :  9000
Substraction of  100 and 400 is :  -300


'''
