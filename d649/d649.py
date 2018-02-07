n=0
while True:
   try:
       n=int(input())
       for i in range(1,n+1,1):
           for j in range(n-i,0,-1):
               print("_",end="")
           for k in range(1, i + 1, 1):
               print("+", end="")
           print("",end='\n')
   except:
       break