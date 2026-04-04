class person:
    def __init__(self , name):
        self.name = name
    def show_name(self):
        print("Name : " , self.name)

class emlpoyee(person):
    def __init__(self , name , salary):
        super.__init__(name)
        self.salary = salary
    def show_salary(self):
        print("salary : " , self.salary)
    
class manager(emlpoyee):
    def __init__(self , name , salary , department):
        super().__init__(name , salary)
        self.department = department
    def show_department(self):
        print("department : " , self.department)

m = manager("Salman", 500000 , "AI")

m.show_name()
m.show_salary()
m.show_department()