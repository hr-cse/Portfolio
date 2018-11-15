# Base or Super class 
class Vehicle:
	def __init__(self,price):
		self.price = price

	def display(self):
		print(self.price)

		
# Inherited or Subclass
class Category(Vehicle):
	def __init__(self, price, name):
		Vehicle.__init__(self, price)
		self.name = name

	def disp_name(self):
		print(self.name)





if __name__ == '__main__':
	cat = Category(12000, 'BMW')
	cat.disp_name()
	cat.display()