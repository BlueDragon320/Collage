import math
def math_calculator():
    while True:
        print("\nMath Module Functions Calculator")
        print("-" * 35)
        print("1. Ceil and Floor")
        print("2. Logarithmic (log, log10)")
        print("3. Trigonometric (sin, cos, tan)")
        print("4. Inverse Trigonometric (asin, acos, atan)")
        print("5. Absolute Value (fabs)")
        print("6. Factorial")
        print("7. Modulus (fmod)")
        print("8. Square Root (sqrt)")
        print("9. Exit")
        choice = input("\nSelect an option: ")
        if choice == '1':
            num = float(input("Enter a decimal number: "))
            print(f"Ceil ({num}) = {math.ceil(num)}")
            print(f"Floor ({num}) = {math.floor(num)}")
        elif choice == '2':
            num = float(input("Enter a positive number: "))
            if num <= 0:
                print("Error: Number must be positive.")
            else:
                print(f"log({num}) = {math.log(num):.4f}")
                print(f"log10({num}) = {math.log10(num):.4f}")
        elif choice == '3':
            num = float(input("Enter angle in degrees: "))
            rad = math.radians(num)
            print(f"sin({num}) = {math.sin(rad):.4f}")
            print(f"cos({num}) = {math.cos(rad):.4f}")
            print(f"tan({num}) = {math.tan(rad):.4f}")
        elif choice == '4':
            num = float(input("Enter a number between -1 and 1: "))
            if num < -1 or num > 1:
                print("Error: Input must be between -1 and 1.")
            else:
                print(f"asin({num}) = {math.degrees(math.asin(num)):.2f} degrees")
                print(f"acos({num}) = {math.degrees(math.acos(num)):.2f} degrees")
                print(f"atan({num}) = {math.degrees(math.atan(num)):.2f} degrees")
        elif choice == '5':
            num = float(input("Enter a number: "))
            print(f"Absolute value of {num} is {math.fabs(num)}")
        elif choice == '6':
            num = int(input("Enter a non-negative integer: "))
            if num < 0:
                print("Error: Number cannot be negative.")
            else:
                print(f"Factorial of {num} = {math.factorial(num)}")
        elif choice == '7':
            x = float(input("Enter dividend: "))
            y = float(input("Enter divisor (non-zero): "))
            if y == 0:
                print("Error: Divisor cannot be zero.")
            else:
                print(f"fmod({x}, {y}) = {math.fmod(x, y)}")
        elif choice == '8':
            num = float(input("Enter a non-negative number: "))
            if num < 0:
                print("Error: Number cannot be negative.")
            else:
                print(f"Square root of {num} is {math.sqrt(num):.4f}")
        elif choice == '9':
            print("Exiting Calculator. goodbye!")
            break
        else:
            print("Invalid option! Please choose from the menu.")
if __name__ == '__main__':
    math_calculator()
