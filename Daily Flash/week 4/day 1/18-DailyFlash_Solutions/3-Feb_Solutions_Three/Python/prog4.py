inc = 0
for i in range(4):
    inc = 0
    for j in range(4 - i):
        print(chr(65 + i + inc), end = " ")
        inc += 2
    print()
