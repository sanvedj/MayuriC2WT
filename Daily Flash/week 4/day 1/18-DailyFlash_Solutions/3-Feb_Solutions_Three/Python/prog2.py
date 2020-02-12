def bin_hex(b):
    hex_d = {10 : 'A', 11 : 'B', 12 : 'C', 13 : 'D', 14 : 'E', 15 : 'F'}
    rem = 0
    i = 0
    dec = 0

    j = 0
    rem1 = 0
    div = 0
    while(b != 0):
        rem = b % 10
        if(not (rem == 0 or rem == 1)):
            print("Enter valid bin")
            exit(1)
        dec = dec + rem * (2 ** i)
        i += 1
        b = b / 10
        b = int(b)
    print("Dec : ", dec)
    print("Hex : ", end = "")
    while(j >= 0):
        div = dec / 16 ** j
        div = int(div)
        rem1 = dec % 16 ** j
        if(div >= 0 and div < 16):
            if(div < 10):
                print(div, end = "")
            else:
                print(hex_d[div], end = "")
            j -= 1
            dec = rem1
        else:
            j += 1

b = int(input("num : "))
bin_hex(b)
