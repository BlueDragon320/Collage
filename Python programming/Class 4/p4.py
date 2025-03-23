# Q2] Write a proram using function to read and display the details of employee

def emp_details(name, age, empid, email, contact, address):
    print(f"Name: {name}")
    print(f"Age: {age}")
    print(f"Employee ID: {empid}")
    print(f"Email: {email}")
    print(f"Contact: {contact}")
    print(f"Address: {address}")
    employee_details = {
        "Name": name,
        "Age": age,
        "Employee ID": empid,
        "Email": email,
        "Contact": contact,
        "Address": address
    }
    return employee_details
employee = emp_details(
    name="Alice",
    age=30,
    empid="E12345",
    email="alice@example.com",
    contact="1234567890",
    address="123 Main Street"
)
print("\nEmployee Details Dictionary:")
print(employee)
