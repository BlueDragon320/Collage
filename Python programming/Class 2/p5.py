# Creating a sample dictionary
my_dict = {
    "name": "Alice",
    "age": 25,
    "City": "New York",
    "profession": "Engineer"
}
print(my_dict)

# 1. get() = Return the value for the specified key
name = my_dict.get("name")
print("Name:", name)

# 2. Keys() - Returns a view object of all dictionary keys
keys = my_dict.keys()
print("Keys():", keys)

# 3. values() - Returns a view object of all dictionary values
values = my_dict.values()
print("Values():", values)

my_dict.update({"age": 26, "country": "USA"})
print("Before update():", my_dict)
my_dict.update({"age": 30, "City": "hubli"})
print("After update():", my_dict)

my_dict.clear()
print("After clear(): ", my_dict)