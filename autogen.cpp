/*
This program will allow you to generate serial key
*/
#include <bits/stdc++.h>
#include "genserial.hpp"
using namespace std;

int main()
{
    SerialKey k;
    string allk = k.getstr(), tempkey = k.getkey(), newkey, keyinput;
    int choice;
    do
    {
    cout << "Menu: \n1: Generate Key\n2: Enter Key\n";
    cin >> choice;
        switch(choice)
        {
            case 1:
            newkey = generatekey(allk, tempkey);
            cout << "copy your key: " << newkey << endl;
            break;
            case 2:
            cout << "Please enter your key: ";
            cin >> keyinput;
                if(keyinput == newkey)
                    cout << "Welcome to my life\n";
                else
                    cout << "Invalid Key\n";
                    choice = 3;
            break;
        }
    }
    while (choice != 3);
    
}