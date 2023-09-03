import random

size = random.randint(1, 100)                                # pick a random integer between 1 and 100 to be size of the list
mylist = [random.randint(1, 10) for _ in range(size)]        # pick a random integer between 1 and 10 to fill every element within the size of the list
total = mylist.count(4)
print("Generated List:", mylist)                            # print the list
print("Count of 4:", total)                                 # print the count
