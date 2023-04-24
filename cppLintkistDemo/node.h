/**
 * @file node.h
 * @author youngwei-ewe (jaychiang0127@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-04-24
 *
 * @copyright @楊偉 Copyright 2023
 */

class Node
{
private:
    int _value;

public:
    Node *next;
    Node();
    Node(int);
    ~Node();
    int getValue();
    void setValue(int);
};