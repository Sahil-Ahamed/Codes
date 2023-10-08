class Length:
    def find_length(self,var):
        return len(var)

# Finding length of int is not possible. Convert into string then find length if needed.
num=input("Enter a string:")
obj1=Length()

print("Length of string=",obj1.find_length(num))
