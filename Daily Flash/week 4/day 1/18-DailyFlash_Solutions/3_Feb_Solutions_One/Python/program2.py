

num  = input("Enter the four digit binary number : ")

rem = 0
position = 1
power = 1
sum1 = 0


def powerOf2(under,upper):
    while(upper!=1):
        under = 2*under
        upper = upper-1
    return under    


while num!=0:

    rem = num%10;

    if rem==1:
        sum1 = sum1 + power;
    power = powerOf2(2,position)
    position = position + 1

    num = num/10

if sum1 == 10:
    print("A")
elif sum1 == 11:
    print("B")
elif sum1 == 12:
    print("C")
elif sum1 == 13:
    print("D")
elif sum1 == 14:
    print("E")
elif sum1 == 15:
    print("F")
else:
    print(sum1)

