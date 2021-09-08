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
newLine = ''
betterLines = []
for l in lines:
	lines[i] = l.strip("\n")
	newLine = newLine + lines[i] + ", "
	if i%13 == 0:
		newLine = newLine+"\n"
		betterLines.append(newLine)
		newLine = ''
	i = i + 1
#print (betterLines)
with open(oF, 'w') as f:
	f.write('{\n')
	for line in betterLines:
		f.write(line)
	f.write('\n}')
