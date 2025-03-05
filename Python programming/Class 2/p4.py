# Creatig a sample string

text = "Hello, Python Programming!"
print("Length of string:", len(text))
print("Lowercase:", text.lower())
print("Uppercase:",text.upper())
print("Stripped String:", text.strip())
print("Replace 'python' with 'java':", text.replace("Python", "Java"))
words = text.split(",")
print("Splitted String:", words)
joined_text = "-".join(["Python", "is", "awesome"])
print("Joined String:", joined_text)

index=text.find("Python")
print("Index of 'Python':", index)

count = text.count("o")
print("Count of 'o':", count)
print("Starts with 'Hello':", text.startswith("Hello"))
print("End with 'programming':", text.endswith("Programming!"))
print("Capitalized:", text, text.capitalize())
print("Title case:", "Python".isalpha())
print("Is Alphabetic:", "Python".isalpha())

print("Is Numeric:", "12345".isnumeric())
print("Is Digit:", "100".isdigit())