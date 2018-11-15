class Test():
	#consttructor
	def __init__(self,a,b):
		self.a=a
		self.b=b

	def add(self):
		c = a+b
		print(c)
	def mul(self):
		print(a*b)

	#destructor
	def __del__(self):
		print("Destructor")

if __name__ == "__main__":

	a = int(input())
	b = int(input())
	#create class object
	test = Test(a,b)
	test.add()
	test.mul()

		