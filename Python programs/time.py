import sys

def process(B):
    #print(B)
    B.sort(key=lambda x:x[1])
    s = B[0][0]
    for i in range(len(B)-1):
        if B[i][2] >= B[i+1][1]:
            return -1
        s = s + B[i+1][0]
    return s


def rec( B, A, k):
    if len(B) == k:
        _r =  process(B)
        #if _r != -1:
            #print(B)
        return _r
    for i in range(0, len(A)):
        B.append(A[i])
        r = rec(B, A, k)
        if r != -1:
            return r
        B.pop()
    return -1


def traderProfit(k, n, A):
    # Complete this function
    maxima =-1
    res = []
    for i in range(0, n):
        for j in range(i+1, n):
            if(A[i] > A[j]):
                break
            res.append([A[j]-A[i], i, j])
    res.sort(reverse=True)
    for i in range(1,k+1):
        B = []
        r = rec(B, res, i)
        if r>maxima :
            maxima=r
    #print(r)
    #print(res)
    if maxima == -1:
        return 0
    return maxima
            

if __name__ == "__main__":
    q = int(input().strip())
    for a0 in range(q):
        k = int(input().strip())
        n = int(input().strip())
        arr = list(map(int, input().strip().split(' ')))
        result = traderProfit(k, n, arr)
        print(result)
