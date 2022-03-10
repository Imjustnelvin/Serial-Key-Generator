#include <iostream>
using namespace std;

//KEY GENERATOR
string generatekey(string ch, string k)
{
    srand(time(NULL));
    int r;
    for (unsigned i = 0; i < k.length(); i++)
    {
        r = rand() % 35;
        k[i] = ch[r];
    }
    return k;
}
