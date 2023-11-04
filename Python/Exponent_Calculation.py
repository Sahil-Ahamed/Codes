def power(n,m):
    ans=1
    try:
        for i in range(m):
            ans=ans*n
        if(n==0 or m==0):
            raise ValueError
    except :
        print("Power operation can not be performed.")
    else:
        return ans


base=int(input("Enter the base value:"))
exponent=int(input("Enter the exponent:"))

print("After performing operation answer is",power(base,exponent))
