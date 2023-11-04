class student:
    name=''
    age=0
    def ini(self):
        self.name='Sahil'
        self.age=20
    def dis(self):
        print("Name=",self.name)
        print("Age=",self.age)
        
class science(student):
    subject1=''
    subject2=''
    def input(self):
        self.subject1="Physics"
        self.subject2="Computer Science"
        print("Subject1=",self.subject1)
        print("Subject2=",self.subject2)
        
class arts(student):
    subject1=''
    subject2=''
    def input(self):
        self.subject1="English"
        self.subject2="Philosophy"
        print("Subject1=",self.subject1)
        print("Subject2=",self.subject2)
        
        
objscience=science()
objarts=arts()

objscience.ini()
objscience.dis()
objscience.input()
print("\n")
objarts.ini()
objarts.dis()
objarts.input()
