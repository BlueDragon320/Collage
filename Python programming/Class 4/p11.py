def calculate_gst(base_price, gst_rate):
    return (base_price * gst_rate) / 100

def calculate_total(base_price, gst_amount, quantity):
    return (base_price + gst_amount) * quantity

def generate_bill():
    product_name = input("Enter the product name: ")
    base_price = float(input("Enter the base price of the product: "))
    gst_rate = float(input("Enter the Gst rate (in %): "))
    quantity = int(input("Enter the quantity: "))

    gst_amount = calculate_gst(base_price, gst_rate)
    total_bill = calculate_total(base_price, gst_amount, quantity)

    print("====Bill Summary====")
    print(f"Product Name: {product_name}")
    print(f"Base price (per unit): {base_price:.2f}")
    print(f"Gst rate: {gst_rate:.2f}%")
    print(f"Gst amount: {gst_amount:.2f}")
    print(f"Quantity: {quantity}")
    print(f"Total Bill amount: {total_bill:.2f}")

generate_bill()
