/**
 * @file stack.cpp
 * @author youngwei-ewe (jaychiang0127@gmail.com)
 * @brief
 * @link *link*
 * @version 0.1
 * @date 2023-04-24
 *
 * @copyright @楊偉 Copyright 2023
 */
#include "stack.h"
#include <iostream>

Stack::Stack()
    : _size(0), _index(0), arr(nullptr)
{
}

Stack::Stack(int size)
    : _size(size), _index(0)
{
    this->arr = new int[this->_size];
}

Stack::~Stack()
{
    delete this->arr;
}

int Stack::pop()
{
    if (this->_index <= 0)
    {
        printf("err: empty stack\n");
        return NULL;
    }
    else
    {
        return arr[--(this->_index)];
    }
}

void Stack::push(int val)
{
    if (this->_index >= this->_size)
    {
        printf("err: full stack\n");
        return;
    }
    else
    {
        this->arr[(this->_index)++] = val;
    }
    return;
}

void Stack::setSize(int size)
{
    if (this->arr == nullptr)
    {
        this->_size = size;
        this->arr = new int[this->_size];
    }
    else
    {
        printf("info: already set size");
        return;
    }
}

void Stack::show()
{
    for (int i = this->_index - 1; i >= 0; i--)
    {
        printf("%d: %d\n", i, this->arr[i]);
    }
    return;
}
