read -p "Enter a number:" n

flag=0
for((i=2;i<n;i++)){
    if((n%i==0)); then
        flag=1
    fi
}

if((flag==0)); then
    echo Prime number.
else
    echo Non-Prime number.
fi
