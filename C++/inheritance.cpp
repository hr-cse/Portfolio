#include<bits/stdc++.h>
using namespace std;


class Base{
    public:
        float price, weight;
        string color, name;

        void showMe(string name){
            this->name = name;
            cout<<this->name;
        }
};

class Manufacturer{
public:
    string cName, title;
};

class Car:public Base, public Manufacturer{
public:
    Car(float p, float w, string co, string name, string title){
        this->price = p;
        this->weight = w;
        this->color = co;
        this->cName = name;
        this->title = title;
        cout<<"Car\nPrice(K):"<<this->price<<"\nWeight(Ton):"<<this->weight<<"\nColor:"<<this->color<<"\nName:"<<this->cName<<"\nTitle:"<<this->title<<endl;
    }
};

int main()
{
    Car car(3.5, 1.5, "Black","Audi", "Make Easy");
    car.showMe("Harun");
    return 0;
}
