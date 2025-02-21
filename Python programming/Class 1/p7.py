
# Q7] Write a program to compute simple interest by taking input of a) principal b) time taken c) rate of interest

principal = float(input("Enter the value of principal : "))
tt = float(input("Enter the vlaue of timetaken: "))
roi = float(input("Enter the value of rate of interest : "))
si = (principal * tt * roi)/100
print(f"The simple interest for principal {principal} with rate of interest of {roi} and time {tt} is : {si:.2f}")
