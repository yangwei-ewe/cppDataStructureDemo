/**
 * @file main.cpp
 * @author youngwei-ewe (jaychiang0127@gmail.com)
 * @brief
 * @link *link*
 * @version 0.1
 * @date 2023-04-24
 *
 * @copyright @楊偉 Copyright 2023
 */

#include "stack.cpp"
#include <ctime>
#include <random>
using namespace std;

int main()
{
    Stack stack(5);
    srand(time(NULL));
    for (int i = 0; i < 7; i++)
    {
        stack.push(rand() % 100);
    }
    stack.show();
    cout << "poping...\n: " << stack.pop() << endl;
    stack.show();
    return 0;
}
