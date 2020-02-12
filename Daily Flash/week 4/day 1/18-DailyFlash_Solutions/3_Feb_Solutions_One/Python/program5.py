

def powerOf10(under,upper):
    while upper!=0:
        under = 10*under
        upper = upper - 1
    return under    


num = input("Enter the number : ")

ans = (powerOf10(10,num)-(9*num)-10)/9

print(ans)



