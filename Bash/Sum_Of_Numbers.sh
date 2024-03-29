read -p "Enter number of inputs:" n
ar=()
echo "Enter the numbers:"
for((i=0;i<n;i++)){
    read ar[$i]
}
for((i=0;i<n;i++)){
     sum=$((sum+${ar[i]}))
}
echo "Sum of elements=$sum"