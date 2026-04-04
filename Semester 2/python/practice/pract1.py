class Vehicle:
    
    def start(self):
        print("Vehicle is starting")
    
class Car(Vehicle):
    
    def start(self):
        print("Car starts with key")

c = Car()

c.start()    