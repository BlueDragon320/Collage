def demonstrate_isadirectory_error():
    directory_name = "example_directory"
    try:
        import os
        os.makedirs(directory_name, exist_ok=True)

        with open(directory_name, 'r') as file:
            content = file.read()
            print(content)
    except (IsADirectoryError, PermissionError):
        print(f"Error: '{directory_name}' is a directory, not a file.")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

demonstrate_isadirectory_error()
