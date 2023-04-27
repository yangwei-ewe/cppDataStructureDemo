/**
 * @file stack.h
 * @author youngwei-ewe (jaychiang0127@gmail.com)
 * @brief
 * @link *link*
 * @version 0.1
 * @date 2023-04-24
 *
 * @copyright @楊偉 Copyright 2023
 */

class Stack
{
private:
    int _size, _index;
    int *arr;

public:
    Stack();
    Stack(int);
    ~Stack();
    int pop();
    void push(int);
    void show();
    void setSize(int);
};