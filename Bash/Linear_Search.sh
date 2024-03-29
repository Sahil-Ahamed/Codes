read -p "Enter number of inputs:" n
ar=()
echo "Enter the numbers:"
for((i=0;i<n;i++)){
    read ar[$i]
}
read -p "Enter the key:" key
flag=0

for((i=0;i<n;i++)){
    if(( ${ar[i]}==key )); then
        echo "Element found at index $i"
        flag=1
    fi
}
if((flag==0)); then
    echo "Element not found"
fi