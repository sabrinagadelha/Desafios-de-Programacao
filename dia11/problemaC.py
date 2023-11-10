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

def maior_solução(s):
    pref = kmp(s)
    n = len(s)
    candidato = pref[n]
    while candidato > 0:
        for i in range(n):
            if pref[i] == candidato:
                return(candidato)
        candidato = pref[candidato]
    return 0

st = input()
maior = maior_solução(st)
if(maior == 0):
    print("Just a legend")
else:
    print(st[0:maior])
