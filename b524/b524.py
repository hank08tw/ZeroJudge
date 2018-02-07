n="yee"
while True:
    try:
        n=str(input())
        y_pos=0
        step=0
        for i in range(len(n)):
            if(n[i]=='y'):
                step=step+abs(i-y_pos)
                y_pos=y_pos+3
        print(step)
    except:
        break