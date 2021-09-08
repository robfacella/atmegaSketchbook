#import os

#inputFile
inF = "megalovania.Hz"
#inF = "megalovania.ms"
#outputFile
oF = "megalovania.Hz.Array"
#oF = "megalovania.ms.Array"
with open(inF, 'r') as f:
	lines = f.readlines()
print (lines)
