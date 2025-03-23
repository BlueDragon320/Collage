# Q8] Write a promgram using function to compute salary of the employee
def emp_salary(bs, hra, da, tds):
  return bs + (hra/100*bs) + (da/100*bs) - tds
bs = float(input("Enter basic salary: "))
hra = float(input("Enter the Hra in percentage: "))
da = float(input("Enter the Da in percentage: "))
tds = float(input("Enter the total deduction: "))
total = float(emp_salary(bs, hra, da, tds))
print(f"The total salary of the employee is: {total:.2f}")