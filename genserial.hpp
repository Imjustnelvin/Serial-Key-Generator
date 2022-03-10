#include <iostream>
#include "genserial.cpp"
using namespace std;

class SerialKey
{
private:
    string str = "A1B2C3D4E5F6G7H8I9GKLMNOPQ0RSTUVXYZ";
    string key = "000000000000000";
public:
    string getstr() //STR GETTER
    {
        return str;
    }

    string getkey() //KEY GETTER
    {
        return key;
    }

    string setkey(string newkey)
    {
        return key = newkey;
    }
};

//no-class method
string generatekey();