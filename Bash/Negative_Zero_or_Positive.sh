echo Enter a number:
read n

if((n<0)); then
    echo Negative Number
elif ((n==0)); then
    echo You entered Zero
else
    echo Positive Number
fi
