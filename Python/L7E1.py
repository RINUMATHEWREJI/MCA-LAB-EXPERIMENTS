def read_file(filename):
    try:
        with open(filename,'r') as files:
            lines = files.readlines()
            return lines
    except FileNotFoundError:
        print(f"eneterd file {filename} not found")
        return[]
filename = input("enter file name : ")
lines = read_file(filename)
if lines:
    print("lines read from the file")
    for line in lines:
        print(line.strip())
else:
    print("no lines read from file")