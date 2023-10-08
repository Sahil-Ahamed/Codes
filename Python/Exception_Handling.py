while(True):
    try:
        num1=int(input("Enter greater number:"))
        num2=int(input("Enter smaller number:"))
        
        if(num1<num2):
            raise ValueError
        else:
            break
    except: 
        print("Bro! Enter the greater number first 🤦️")
        print("Try again.\n")
        
print("Substraction of the numbers are:",(num1-num2))
    
