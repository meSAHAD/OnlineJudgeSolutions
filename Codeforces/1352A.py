a=int(input())
for i in range(a):
  b,c=map(int,input().split())
  d=[]
  mini=1
  for e in range(1,b+1):
    if e%c==0:
      d.append(mini)
      mini+=1
    else:
      d.append(b)
      b-=1
  print(*d)