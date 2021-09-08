#Strip away everything after the semicolon; then get just what's within paranthesis ()
sed "s/\;.*//" megalovania.txt | sed -r 's/^[^(]*\(|\)[^)]*$//g' | sed -n '/,/p' | awk '{split($0,a,","); print a[3]}' > megalovania.ms
#sed -r 's/^[^(]*\(|\)[^)]*$//g' megalovania.txt

