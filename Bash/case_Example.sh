read -p "Enter first number:" num1
read -p "Enter second number:" num2

case $((num1>num2)) in 
    1) echo $num1 is greater. ;;
    0) echo $num2 is greater. ;;
esac
