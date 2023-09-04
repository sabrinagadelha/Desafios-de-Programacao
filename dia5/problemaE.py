T = int(input())
for i in range(T):
    n = int(input())
    stringR = input()
    stringB = input()
    totalR = 0
    totalB = 0
    for i in range(n):
        if(stringR[i] > stringB[i]):
            totalR += 1
        elif(stringB[i] > stringR[i]):
            totalB += 1
    if(totalR > totalB):
        print("RED")
    elif(totalB > totalR):
        print("BLUE")
    else:
        print("EQUAL")
    
