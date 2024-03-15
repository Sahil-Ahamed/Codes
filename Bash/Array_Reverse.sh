read -p "Enter number of elements in array:" n
ar=()
echo "Enter the elements:"
for((i=0;i<n;i++)){
    read ar[$i]
}


echo "Elemnts in reverse order are:"
for((i=n-1;i>=0;i--)){
    echo ${ar[i]}
}
