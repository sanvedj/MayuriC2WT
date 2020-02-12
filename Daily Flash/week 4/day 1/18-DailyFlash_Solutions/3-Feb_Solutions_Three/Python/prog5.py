n = int(input("n : "))
num = 0
s = 0
for i in range(n):
    num = num * 10 + 9
    s += num
    if(i < n - 1):
        print(num, " + ", end = "")
    else:
        print(num, " = ", end = "")
print(s, end = "")
