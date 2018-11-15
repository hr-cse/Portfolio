#include<bits/stdc++.h>
using namespace std;


class Distance{
private:
    int meter;
public:
    Distance(){
        meter = 50;
    }
    friend int inputData(Distance);
};

int inputData(Distance d){
    int n;
    cin>>n;
    d.meter += n;
    return d.meter;
}


int main()
{
    Distance d;
    cout<<inputData(d);
    return 0;
}
