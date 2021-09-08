#Strip away everything after the semicolon; then get just what's within paranthesis ()
sed "s/\;.*//" megalovania.txt | sed -r 's/^[^(]*\(|\)[^)]*$//g' | awk 'BEGIN { FS = ","} ; /^[Rr]/ {print $2,'Hz ',$3,'ms'}'
#sed -r 's/^[^(]*\(|\)[^)]*$//g' megalovania.txt

