#sed 's/.* (\(.*\)) .*/\1/g' megalovania.txt
sed -r 's/^[^(]*\(|\)[^)]*$//g' megalovania.txt
