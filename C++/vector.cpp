#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
//    vector <int> a;
//    int i;
//
//    for(i = 1; i <= 10; ++i)
//    {
//        a.push_back(i);
//    }
//    for (i = a.begin(); i != a.end(); ++i)
//        cout << *i << " ";

vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout << "Output of begin and end: ";
    for (int i = g1.front(); i <= g1.back(); ++i)
        cout << i << " ";
//cout<<g1.front();
//cout<<g1.back();
//cout<<g1.end();

    return 0;
}
