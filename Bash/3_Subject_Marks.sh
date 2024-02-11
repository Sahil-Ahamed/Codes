echo Enter first subject\'s marks:
read first
echo Enter second subject\'s marks:
read second
echo Enter third subject\'s marks:
read third

total=$(( first+second+third ))
percentage=$(( total/3 ))

if(( percentage<75 )); then
    grade=Fail
elif(( percentage<80 && percentage>=75 )); then
    grade=B
elif (( percentage>=80 && percentage<90 )); then
    grade=A
else
    grade=A+
fi

echo Total marks= $total
echo Percentage= $percentage
echo Grade= $grade
