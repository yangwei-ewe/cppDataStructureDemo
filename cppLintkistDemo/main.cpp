/**
 * @file main.cpp
 * @author youngwei-ewe (jaychiang0127@gmail.com)
 * @brief link list implement
 * @version 0.1
 * @date 2023-04-24
 *
 * @copyright @楊偉 Copyright 2023
 */

#include "linkList.cpp"
#include <ctime>
#include <iostream>
#include <random>
using namespace std;

int main()
{
    srand(time(NULL));
    Linklist ll;
    for (int i = 0; i < 5; i++)
    {
        int randnum = rand() % 100;
        ll.insert(i, randnum);
        cout << "insert: " << randnum << endl;
    }
    ll.show();
    cout << "delete ll[3]..." << endl;
    ll.del(3);
    ll.show();
    cout << "inserting ll[1]=42" << endl;
    ll.insert(1, 42);
    ll.show();
    return 0;
}
