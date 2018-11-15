#include<iostream>
using namespace std;

class Test{
	private: int a,b,c;
	public: Test(int a, int b){
        this->a = a;
        this->b = b;
	}
	public: int add(){
		c = a+b;
		cout<<c;
	}
	public: int mul(){
        cout<<a*b;
	}
	~Test(){
		cout<<"Destructor";
	}
};

int main(){
    int a,b;
	cin>>a>>b;
	Test test(a,b);
	test.add();
	test.mul();
	return 0;
}
