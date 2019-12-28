
with open("input.txt", "r") as lyst:
    
    lyst = [int(i) for i in lyst.readlines()]
    ordered = False
    while not (ordered):
        ordered = True
        for i in range(len(lyst)-1):
            if (lyst[i] > lyst[i+1]):
                lyst[i], lyst[i+1] = lyst[i+1], lyst[i]
                ordered = False
    
    for i in lyst:
        print (i)
