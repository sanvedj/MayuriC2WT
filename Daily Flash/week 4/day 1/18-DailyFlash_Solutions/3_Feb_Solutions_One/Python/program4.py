

ch ='A'


for itr in range(4):

    for jtr in range(4-itr):
        print(chr(ord(ch)+(jtr*2)),end="\t")
    print("")
    ch = chr(ord(ch)+1)
