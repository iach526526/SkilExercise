a=int(input())
b=int(input())
result=int(input())
is_sol=False
if result==0:
    if (a<0 and b>=0) or (b<0 and a>=0):
        print("AND\nOR")
        is_sol=True
    if not(a>=0 and b<0):
        print("XOR")
        is_sol=True
elif result==1:
    if (a>=0 and b>=0) or (a<0 and b<0):
        print("AND\nOR")
        is_sol=True
    if (a>=0 and b<0):
        print("XOR")
        is_sol=True
if not(is_sol):
    print("IMPOSSIBLE")