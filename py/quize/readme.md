# 資工的遊戲
----
題目要求:比較兩陣列差異，有四種方式:
- pop:刪除陣列最後一項
- push:刪除陣列最後一項
- del:刪除陣列中任意一項
- add:刪除陣列中任意一項

### 題解
把這四個方法理解為2個行為
1.增加:新陣列比舊陣列要長(push、add)
2.減少:新陣列比舊陣列要短(pop、del)

先找出陣列元素是增加or減少，再判斷是第幾項開始不同，請注意在比較兩陣列時需要把元素較少的那個加上一個None讓項數相等，做對齊的動作，否則在比較時會out of range。

找到不同的那個index後判斷如果是末項不同，就是pop或push;其他則為add或del



# Problem C 資工的美德

簡單的字串處理，數陣列長度-2就是中間要填充的數字，陣列開頭就是index[0]，結尾是index[-1]