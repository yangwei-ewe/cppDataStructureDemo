/**
 * @file linkList.h
 * @author youngwei-ewe (jaychiang0127@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-04-24
 *
 * @copyright @楊偉 Copyright 2023
 */
#include "node.cpp"
#include <stdio.h>

class Linklist
{
private:
    Node *_head;

public:
    Linklist();
    ~Linklist();
    void show();
    void insert(int, int);
    void del(int);
    Node *search(int);
};
