# Creating a sample list
my_list = [10, 20, 30, 40, 50]

my_list.append(60)
print("After appending 60:", my_list)

my_list.insert(2, 65)
print("After inserting 65:", my_list)

my_list.extend([10, 20, 30])
print("After extend([10, 20, 30]):", my_list)

my_list.remove(30)
print("After removing 30:", my_list)

popped_item = my_list.pop()
print("Popped itme:", popped_item)
print("After pop():", my_list)

count_20 = my_list.count(20)
print("Count of 20:", count_20)

my_list.sort()
print("After sort():", my_list)

my_list.reverse()
print("After reverse():", my_list)

my_list.clear()
print("After clear():", my_list)