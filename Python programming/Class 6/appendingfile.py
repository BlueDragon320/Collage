def append_text_file(content):
    file_name = "sample.txt"
    try:
        with open(file_name, 'a') as file:
            file.write(content + '\n')
        print(f"Content append to '{file_name}' created successfully!")
    except Exception as e:
        print(f"An error occurred: {e}")

append_text_file("This is the appended content.")
