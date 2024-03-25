colorlist = input("enter the colors(seperated by spaces) : ")
color =  colorlist.split(",")
if len(color)>0:
    firstcolor = color[0]
    lastcolor = color[-1]
    print(f"first color: {firstcolor}  ,  last color: {lastcolor}")
else:
    print("no color entered")
