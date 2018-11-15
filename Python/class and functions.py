class Car:
	pass	

def getData(self):
	#multiple input
	self.name, self.model, self.price = map(str,input("name, model, price ?:").split())
	# self.name = input()
	# self.model = input()
	# self.price = input()

def  showData(self):
	print(self.name + " " + self.model + " " + self.price)






if __name__ == "__main__":
	#member function of the Car class
	Car.getData = getData 
	Car.showData = showData

	car = Car()
	car.getData()
	car.showData()
