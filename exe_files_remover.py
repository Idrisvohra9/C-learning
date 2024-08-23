import os

dir_path = r'D:\C'
file_extenstion = '' # You can change it based on your need. 

for root, _, files in os.walk(dir_path):
    for file in files:
        if file.endswith(file_extenstion): 
            print("All the .exe files have been deleted MASTER!")
            os.remove(os.path.join(root, file)) # Just delete it
        else:
            print("There are no .exe files left.")
            break