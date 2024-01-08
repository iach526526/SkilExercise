def check(a,b):
    #define 0<a<=b<=x
    if a>b:#swqp
        a,b=b,a
    if a/b>=0.5:
        return True
    else:
        return False

def RC(x):
    for num in range(1,x//2):
        if x%num==0:
            if check(num,x//num):
                return True
    return False
N=int(input())
#測資筆數N，判斷N個數字
output=[0]*N
for i in range(N):
    x=int(input())
    if(RC(x)):
        output[i]=1
for result in output:
    print(result)