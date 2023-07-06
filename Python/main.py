from Student import Student

def details(self):
    print(f"Hi my name is {self.name} and I am {self.age} years old")

student1 = Student("John", 36)
student2 = Student("Mike", 30)
details(student1)
details(student2)