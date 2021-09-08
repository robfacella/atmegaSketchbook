#Strip away everything after the semicolon; then get just what's within paranthesis ()
sed "s/\;.*//" megalovania.txt | sed -r 's/^[^(]*\(|\)[^)]*$//g' | sed -n '/,/p' | awk '{split($0,a,","); print a[2],a[3]}'
#sed -r 's/^[^(]*\(|\)[^)]*$//g' megalovania.txt

