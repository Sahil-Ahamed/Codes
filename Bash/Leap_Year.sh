echo Enter a year:
read year

if(( (year%4==0 || year%400==0) && (year%100!=0) )); then
    echo Leap Year
else
    echo Not A Leap Year
fi
