#include<bits/stdc++.h>
using namespace std;

class Car{
private:
    float price;
    char name[50];
public://member function
    void getData();//declaration
    void showData();
};

//definition
void Car::getData(){
    cin>>price>>name;
}

void Car::showData(){
    cout<<name<<" "<<price;
}

int main(){
    Car car;
    car.getData();
    car.showData();
    return 0;
}
