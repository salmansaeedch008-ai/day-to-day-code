class BankAccount:

    def __init__(self, balance):
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        print("Balance after deposit:", self.balance)

    def withdraw(self, amount):
        if amount > self.balance:
            print("Insufficient balance")
        else:
            self.balance -= amount
            print("Balance after withdrawal:", self.balance)

    def show_balance(self):
        print("Current Balance:", self.balance)


class SavingsAccount(BankAccount):

    def add_interest(self):
        interest = self.balance * 0.05
        self.balance += interest
        print("Balance after interest:", self.balance)


class PremiumSavingsAccount(SavingsAccount):

    def add_bonus(self):
        self.balance += 1000
        print("Bonus added. Balance:", self.balance)


# Testing the classes
account = PremiumSavingsAccount(10000)

account.show_balance()
account.deposit(2000)
account.withdraw(1500)
account.add_interest()
account.add_bonus()
account.show_balance()