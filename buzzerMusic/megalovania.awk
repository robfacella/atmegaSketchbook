#Strip away everything after the semicolon; then get just what's within paranthesis ()
sed "s/\;.*//" megalovania.txt | sed -r 's/^[^(]*\(|\)[^)]*$//g'
#sed -r 's/^[^(]*\(|\)[^)]*$//g' megalovania.txt

