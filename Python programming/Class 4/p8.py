# Q6] Write a program to compute area of triangle using a function
def triangle_area (base, height):
  return 0.5 * base * height
base = float(input("Enter the value of base of the triangle: "))
height = float(input("Enter the value of height of the triangle: "))
area = triangle_area(base, height)
print(f"The area of the triangle with base : {base} and height : {height} is: {area:.2f}")