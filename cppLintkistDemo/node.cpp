/**
 * @file node.cpp
 * @author youngwei-ewe (jaychiang0127@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-04-24
 *
 * @copyright @楊偉 Copyright 2023
 */
#include "node.h"

Node::Node()
    : _value(0), next(nullptr)
{
}

Node::Node(int outterValue)
    : _value(outterValue), next(nullptr)
{
}

Node::~Node()
{
}

int Node::getValue()
{
    return this->_value;
}

void Node::setValue(int outterValue)
{
    this->_value = outterValue;
    return;
}
