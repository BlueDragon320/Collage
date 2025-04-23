def demonstrate_filenotfound_error():
    file_name = "nonexistent_file.txt"  # Specify a file that does not exist
    try:
        # Attempt to open the non-existent file in read mode
        with open(file_name, 'r') as file:
            content = file.read()
            print(content)
    except FileNotFoundError as e:  # Corrected the exception handling block
        # Handle the error if the file does not exist
        print(f"An error occurred: {e}")

# Example usage:
demonstrate_filenotfound_error()
