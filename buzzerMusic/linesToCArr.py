#import os

#inputFile
inF = "megalovania.Hz"
#inF = "megalovania.ms"
#outputFile
oF = "megalovania.Hz.Array"
#oF = "megalovania.ms.Array"
with open(inF, 'r') as f:
	lines = f.readlines()
i = 0
#bL = []
for l in lines:
	lines[i] = l.strip("\n")
	i = i + 1
print (lines)
