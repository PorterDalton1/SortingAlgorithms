"""
Demonstrates Bubble Sort using Python. It gets used by opening a file 
and using the contents of the file to populate the list. 

Code made by:
Porter Dalton 
"""

def BubbleSort(lyst):
    """Takes in a list of ints as input and a list of those ints sorted"""
    ordered = False
    while not (ordered):
        ordered = True
        for i in range(len(lyst)-1):
            if (lyst[i] > lyst[i+1]):
                lyst[i], lyst[i+1] = lyst[i+1], lyst[i]
                ordered = False

def main():
    """Where the file is opened and the lyst calls BubbleSort"""
    with open("input.txt", "r") as lyst:
        
        lyst = [int(i) for i in lyst.readlines()]
        BubbleSort(lyst)

        #Print the sorted lyst
        for i in lyst:
            print (i)

if __name__ == "__main__":
    main()