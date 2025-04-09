def create_text_file(content):
    file_name = "sample.txt"
    try:
        with open (file_name, 'w') as file:
                   file.write(content)
        print(f"File '{file_name}' Created Successfully!")
    except Exception as e:
        print(f"An error occurered: {e}")

create_text_file("This is Content")
              
