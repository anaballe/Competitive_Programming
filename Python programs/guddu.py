# cook your code here
t = int(raw_input())
while(t):
    n = int(raw_input())
    nu = n
    pu = n
    su = 0
    while(nu != 0):
        su = su + nu%10
        nu = nu // 10
    su = su%10
    if(su % 10 == 0):
        print((pu*10))
    else:
        print((pu*10)+(10-su))
    t = t -1
    