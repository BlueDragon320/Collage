#Creating a sample tuple

my_tuple = (10, 20, 30, 40, 50, 20)
count_20=my_tuple.count(20)
print("Count of 20 in tuple:", count_20)
print(count_20)

index = my_tuple.index(30)
print("Index of 30 in tuple:", index)

tuple_length = len(my_tuple)
print("Length of the tuple:", tuple_length)

min_value = min(my_tuple)
print("Minimum value in the tuple:", min_value)

max_value = max(my_tuple)
print("Maximum value in the tuple:", max_value)

sum_value = sum(my_tuple)
print("Sum of all elements:", sum_value)

sliced_tuple = my_tuple[1:4]
print("Sliced tuple: ", {sliced_tuple})

print(30 in my_tuple)
print(100 not in my_tuple)

tuple1 = (1, 2, 3)
tuple2 = (4, 5, 6)
merged_tuple = tuple1 + tuple2
print("Concatenated Tuple: ", merged_tuple)

repeated_tuple = tuple1 * 2
print("Repeated Tuple: ", repeated_tuple)