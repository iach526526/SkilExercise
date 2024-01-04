n=int(input())#幾筆測資
for _ in range(n):
    word=input()
    print(f'{word[0]}{len(word)-2}{word[-1]}')
