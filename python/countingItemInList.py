mylist = [1,4,6,7,4]
counter = 0
total = 0
for counter in range (len(mylist)):
    if mylist[counter] == 4:
        total +=1
print(total)