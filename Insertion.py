with open("input2.txt") as lyst:
    lyst = [int(i) for i in lyst.readlines()]
    
    for i in range(1, len(lyst), 1):
        for e in range(i, 0, -1):
            if (lyst[e] < lyst[e-1]):
                lyst[e], lyst[e-1] = lyst[e-1], lyst[e]
            else:
                break

    for i in range(0, len(lyst), 1):
        print(lyst[i])