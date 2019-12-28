with open("input.txt") as fyle:
    fyle = [int(i) for i in fyle.readlines()]
    for i in range(0, len(fyle), 1):
        lowest = i
        for e in range(i+1, len(fyle), 1):
            if (fyle[e] < fyle[lowest]):
                lowest = e
        fyle[i], fyle[lowest] = fyle[lowest], fyle[i]

    print(fyle)
