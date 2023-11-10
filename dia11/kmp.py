def kmp(p):
    m = len(p)
    b = [-1]*(m+1)
    i, j = 0, -1
    while i<m:
        while j >=0 and p[i]!=p[j]:
            j = b[j]
        i += 1
        j += 1
        b[i] = j
    return b
