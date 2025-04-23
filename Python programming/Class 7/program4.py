def demonstrate_io_error():  
    file_path = "/invalid_directory/sample.txt"  # Path remains the same

    try:
        # Attempt to open a file in a non-existent or invalid directory
        with open(file_path, 'r') as file:  
            content = file.read()
            print(content)  # This line won't execute if an IOError occurs
    except IOError:
        # Handle generic input/output errors
        print(f"Error: An I/O error occurred while accessing '{file_path}'")  
    except Exception as e:
        # Handle any other unexpected exceptions
        print(f"An unexpected error occurred: {e}")  
# Example usage:
demonstrate_io_error()
