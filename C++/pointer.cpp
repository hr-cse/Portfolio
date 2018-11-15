#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *n, c;
    cin>>c;
     n = &c;

     cout<< n<<" "<<c<<endl;
     cout<<*n;

     *n = 6;

     cout<< n<<" "<<c<<endl;
     return 0;
}
