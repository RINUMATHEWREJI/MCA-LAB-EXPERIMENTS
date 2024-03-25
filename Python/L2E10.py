colorlist1 = input("enter the first color list : ")
colorlist2 = input("enter the second color list : ")
color1 = colorlist1.split(",")
color2 = colorlist2.split(",")
color = [i for i in color1  if i not in color2]
print(f"color in list1 that not in list2 : {color}")