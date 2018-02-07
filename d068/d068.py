w=0
while True:
    try:
        w=int(input())
        if w>50:
            print(w-1)
        else:
            print(w)
    except:
        break