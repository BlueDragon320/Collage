# Q5] Write a program to demostrate basic mathematical operations such that the function returns multiple values
def math_operations (a, b):
  sum_result = a + b
  product = a * b
  difference = a / b
  return sum_result, product, difference
sum_value, product_value, difference_value = math_operations(10, 5)
print("Sum:", sum_value)
print("Product:", product_value)
print("Difference:", difference_value)