inputfile = input("enter the input file name : ")
outputfile = input("enter the output file name : ")
with open(inputfile,'r') as file1:
    with open(outputfile,'w') as file2:
        lines = file1.readlines()
        for index,line in enumerate(lines):
            if index % 2 == 0:
                file2.write(line)
with open(inputfile,'r') as file1:
    input_content = file1.read()
    print("content of input file : ")
    print(input_content)
with open(outputfile,'r') as file2:
    output_content = file2.read()
    print("content of output file : ")
    print(output_content)