#include<bits/stdc++.h>
using namespace std;
//
//int swapping(int&, int&);
//
//int main()
//{
//    int a = 4, b = 5;
//    cout<<a<<" "<<b<<endl;
//    swapping(a, b);
//    cout<<a<<" "<<b<<endl;
//    return 0;
//}
//
//int swapping(int &a, int &b)
//{
//    int t;
//    t = a;
//    a = b;
//    b = t;
//}

int swapping(int*, int*);

int main()
{
    int a = 4, b = 5;
    cout<<a<<" "<<b<<endl;
    swapping(&a, &b);
    cout<<a<<" "<<b<<endl;
    return 0;
}

int swapping(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
