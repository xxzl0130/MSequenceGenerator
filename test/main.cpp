#include <iostream>
#include "MSequenceGenerator.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    MSequenceGenerator generator(n);
    for(auto i = 0;i < 10000;++i)
    {
        cout << generator.get() << endl;
    }
}