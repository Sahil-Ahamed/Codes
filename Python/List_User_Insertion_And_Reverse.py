A=[]
n=int(input("Enter number of inputs:"))
sum=0

for i in range(n):
	A.append(int(input("Enter  number:")))
	sum=sum+A[i]
print("Sum=",sum)

print("Reverse=",end=" ")
for j in range(n-1,-1,-1):
	print(A[j],end=" ")
