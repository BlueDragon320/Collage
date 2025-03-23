# Q7] Write a program usign function to compute area of cirle
def area_circle (radius):
  return 3.14 * radius * radius
radius = float(input("Enter the value of radius of the circle: "))
area = area_circle(radius)
print(f"Area of the circle with radius {radius} is: {area:.2f}")