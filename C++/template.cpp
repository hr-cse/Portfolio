#include<bits/stdc++.h>
using namespace std;

template <typename T>

class Calculator
{
private:
    T num1, num2;
public:
    Calculator(T t1, T t2)
    {
        num1 = t1;
        num2 = t2;
    }
    void displayResult()
    {
        //cout<<num1<<num2;
        cout<<add()<<endl;
    }
    T add(){return num1 + num2; }

};

int main()
{
    Calculator<int> intCal(3,4);
    Calculator<float> floatCal(4.4, 5.6);

    intCal.displayResult();
    floatCal.displayResult();

    return 0;
}
