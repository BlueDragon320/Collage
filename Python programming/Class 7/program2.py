def demonstrate_permission_error():  
    # Choose a path that the current user likely does not have
    file_path = "/sample.txt"  # For Linux
    # file_path = "c:\\Windows\\System32\\sample.txt"  # For Windows

    try:
        with open(file_path, 'w') as file:
            file.write("This will cause a PermissionError!")
    except PermissionError: 
        print(f"Error: Permission denied to write to '{file_path}'")  
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

# Example usage:
demonstrate_permission_error()
