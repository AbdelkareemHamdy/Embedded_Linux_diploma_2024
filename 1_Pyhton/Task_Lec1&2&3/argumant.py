import sys
print("This is the name/path of the script: "+sys.argv[0])
print("Number of arguments = "+str(len(sys.argv)-1))
sys.stdout.write("Argmuents is : ")
for i in range(1, len(sys.argv) ):
    sys.stdout.write(sys.argv[i])
    sys.stdout.write(" ")
print("")