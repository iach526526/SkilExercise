import random
Name='P1'#全域玩家姓名
class Poke():
    c =  ['梅','方','心','桃']
    p = ['2','3','4','5','6','7','8','9','T','J','Q','K','A']
    def __init__(self,num):
        self.point = __class__.p[num//4]
        self.color = __class__.c[num%4]
        self.num = num
    def __repr__(self):
        return str(self.color)+str(self.point)
    def __str__(self):
        return str(self.color)+str(self.point)
    def __gt__(self,other): # deal with > operator
        if self.num > other.num:
            return True
        else: 
            return False
    def __lt__(self,other): # deal with < operator
        if self.num < other.num:
            return True
        else: 
            return False
#10點半
class Deck():
    def __init__(self):
        self.cards = []
        for i in range(52):
            self.cards.append(Poke(i))
    def __repr__(self):
        return str(self.cards)
    def __str__(self):
        return str(self.cards)
    @property
    def card_nums(self):
        return len(self.cards)
    def wash(self,count=1000):
        for _ in range(count):#洗牌count次
            random.shuffle(self.cards)
    def deal(self): # deal/distribute a card to the player
        return self.cards.pop()

class Player_cards():
    def __init__(self):
        self.cards = []
        self.__total_point = 0
    def __repr__(self):
        return str(self.cards)
    def __str__(self):
        return str(self.cards)
    @property
    def card_nums(self):
        return len(self.cards)
    #calculate the total point of the player's cards
    def calculate_point(self,c):
        if c.point == 'A':
            self.__total_point += 1
        elif c.point == 'K' or c.point == 'Q' or c.point == 'J' :
            self.__total_point += 0.5
        elif c.point == 'T':
            self.__total_point += 10
        else:
            self.__total_point += int(c.point)
    #show player's cards
    def showPoint(self):#回傳點數(私有)的介面
        return self.__total_point
    @staticmethod
    def SORT(arr):
        MAXSIZE=len(arr)
        for i in range(MAXSIZE-1):
            j=0
            breakFLAG=1
            while j<MAXSIZE-i-1:
                if(arr[j]>arr[j+1]):#swap
                    arr[j],arr[j+1]=arr[j+1],arr[j]
                    breakFLAG=0
                j+=1
            if breakFLAG:
                break
    def show_cards(self,name):
        __class__.SORT(self.cards)
        car_info = f'{name} :\t'
        for item in self.cards:
            car_info+=item.__str__()
            car_info+=' '
        car_info+="  total:"
        car_info+=str(self.__total_point)
        print(car_info)
    #叫牌
    def add_card(self,card):
        self.cards.append(card)
        self.calculate_point(card) #update total points

def PlayerTurn(P,card):
    global NAME
    #重複要牌直到大於10點半
    while not(P.showPoint()>10.5):
        flag=int(input('按0結束，按1叫牌:'))
        if flag==0:#結束
            break
        elif flag==1:#叫牌
            P.add_card(card.deal())
            P.show_cards(NAME)
            print('PC牌組\t:none')#還不存在的PC
    if P.showPoint()<10.5 and P.showPoint()>=0:
        return 0
    else:
        return 1
def PCTurn(COM,card,P1):
    #重複要牌直到大於10點半
    global NAME
    while not(COM.showPoint()>10.5 or COM.showPoint()>P1.showPoint()):
        #叫牌
        input('輸入任意數字+enter繼續')
        COM.add_card(card.deal())
        P1.show_cards(NAME)
        COM.show_cards('PC')
if __name__=='__main__':
    #產生一個排堆
    NAME=input('你的名字:')
    CARDS=Deck()
    CARDS.wash(1000)
    P1=Player_cards()
    # PlayerTurn(P1,CARDS)
    if PlayerTurn(P1,CARDS)==0:
        #PC 回合
        PC=Player_cards()
        PCTurn(PC,CARDS,P1)
        if PC.showPoint()>10.5:
            print(f"電腦爆點!!!{NAME}勝利")
        else:
            if PC.showPoint()>P1.showPoint():
                print(f"電腦獲勝 {NAME}輸了")
            else:
                print(f"電腦點數比較少 {NAME}贏了")
    else:
        print(f"{NAME}爆點!!!敗北")