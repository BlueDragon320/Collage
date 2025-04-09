def create_file(file_name, content):
    try:
        with open(file_name, 'w') as file:
            file.write(content)
        print(f"File '{file_name}' created successfully!")
    except Exception as e:
        print(f"An error occurred: {e}")

files_and_content = [
    ("text.txt", "This is a plain text file."),
    ("html", "<html><body>This is an HTML file.</body></html>"),
    ("css.css", "body { color: lightblue; }"),
    ("javascript_file.js", "console.log('This is a JavaScript file.');"),
    ("python_file.py", "print('This is a Python script.')"),
    ("json_file.json", '{"key": "This is a JSON file"}'),
    ("csv_file.csv", "name\nvaibhav"),
    ("log_file.log", "INFO: This is a log file."),
    ("C_file", "printf("Welcome to c program");"),
    ("text1.txt", "This is a plain text file."),
]

for file_name, content in files_and_content:
    create_file(file_name, content)
