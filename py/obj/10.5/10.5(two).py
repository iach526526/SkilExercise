import random
#繼承給其他class做處理
class Toolbox():
    @staticmethod
    def SORT(arr):
        MAXSIZE=len(arr)
        for i in range(MAXSIZE-1):
            breakFLAG=1
            for j in range(MAXSIZE-i-1):
                if(arr[j]>arr[j+1]):#swap
                    arr[j],arr[j+1]=arr[j+1],arr[j]
                    breakFLAG=0
            if breakFLAG:
                break
    @staticmethod
    def Read(arr):#把list做成字串輸出
        output=''
        for X in arr:
            output+=f'{X} '
        return output
#單獨描述每一張撲克牌
class poke():
    c = ["梅", "方", "心", "桃"]
    p = ["2", "3", "4", "5", "6", "7", "8", "9", "T", "J", "Q", "K", "A"]
    m = [2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,0.5,0.5,0.5,1.0]
    def __init__(self,seq):
        self.color=__class__.c[seq%4]#花色
        self.num=__class__.p[seq//4]#牌上的數字
        self.seq=seq
        self.__point=__class__.m[seq//4]
    def Getpoint(self):#讀取點數的接口
        return self.__point
    def __repr__(self):
        return f'{self.color}{self.num}'
    def __gt__(self,other):
        if self.num>other.num:
            return True
        else:
            return False
        
class Deck():
    def __init__(self):
        self.__cards=[]
        #產生52張撲克(編號0~51)
        for seq in range(52):
            self.__cards.append(poke(seq))
    def WachCard(self,count=1000):#deck:一個一維poke陣列
        for _ in range(count):
            random.shuffle(self.__cards)
    def deal(self):#抽一張牌出來給return
        return self.__cards.pop(0)
class user(Toolbox):#玩家物件，繼承一些小工具
    def __init__(self,NAMEstr):
        self.name=NAMEstr
        self.handcard=[]
        self.__total_point=0
    def GetCard(self,deck):#從deck牌堆抽牌
        get=Deck.deal(deck)
        self.handcard.append(get)
        self.__total_point+=get.Getpoint()
    def __repr__(self):
        self.SORT(self.handcard)
        return self.name+'\t:\t'+self.Read(self.handcard)
    def Nowpoint(self):
        return self.__total_point
def printscore(obj1,obj2):
    print(obj1,'\n',obj2)
    print(obj1.name,'分數::',obj1.Nowpoint())
    print(obj2.name,'分數::',obj2.Nowpoint())
#init
if __name__=='__main__':
    Decknow=Deck()
    Decknow.WachCard()
    P1=user("Each")
    CPU=user("CPU")
    #開局各發一張給雙方
    P1.GetCard(Decknow)
    CPU.GetCard(Decknow)
    printscore(P1,CPU)
    continueFlag=int(input('按0結束,按1叫牌：'))
    while(continueFlag==1):
        P1.GetCard(Decknow)
        printscore(P1,CPU)
        if P1.Nowpoint()>10.5:
            print("玩家爆點!!!")
            exit()
        continueFlag=int(input('按0結束,按1叫牌：'))
    #電腦愚笨的要牌直到手牌大於玩家點數或爆點
    while(1):
        CPU.GetCard(Decknow)
        printscore(P1,CPU)
        if (CPU.Nowpoint()>10.5):
            print("電腦爆點;玩家獲勝")
        elif(CPU.Nowpoint()>P1.Nowpoint()):
            print("電腦獲勝")
        elif(CPU.Nowpoint()>10.5):
            print("電腦獲爆點，玩家獲勝")
        else:
            continue
        break