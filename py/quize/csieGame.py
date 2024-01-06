# import copy

def FindDifferentIndex(new,pre):
    index=0
    # print(len(new),len(pre))
    while(new[index]==pre[index]):
        index+=1#找出兩陣列間不同的那個index
    return index
pre=list(map(int,input().split(' ')))
n=int(input())#測資數量
process=[]
origin=pre.copy()#複製一份一開始的狀態作為輸出使用
for _ in range(n):
    new=list(map(int,input().split(' ')))
    if len(new)>len(pre):#新項較多，這次是push/add
        #長度有變，幫少的補一個none，避免out of range
        pre.append(None)
        DFindex=FindDifferentIndex(new,pre)
        if DFindex==len(pre)-1:#push
            # print("push",new[DFindex])
            process.append(('push',new[DFindex]))
        else:
            # print("add",new[DFindex])
            process.append(('add',new[DFindex]))
    elif len(new)<len(pre):#舊項較多，這次是del/pop
        #長度有變，幫少的補一個none，避免out of range
        new.append(None)
        DFindex=FindDifferentIndex(new,pre)
        if DFindex==len(new)-1:#pop
            # print("pop",pre[DFindex])
            process.append(('pop',pre[DFindex]))
        else:
            # print("del",pre[DFindex])
            process.append(('del',pre[DFindex]))
        new.pop(len(new)-1)
    #更新pre
    pre=new.copy()

#output
for i in range(len(origin)):
    if i==0:
        print(origin[i],end='')
    else:
        print("->"+str(origin[i]),end='')
print()
for pair in process:
    print(pair[0],pair[1])