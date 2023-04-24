/**
 * @file linkList.cpp
 * @author youngwei-ewe (jaychiang0127@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-04-24
 *
 * @copyright @楊偉 Copyright 2023
 */
#include "linkList.h"

Linklist::Linklist()
    : _head(nullptr)
{
}

Linklist::~Linklist()
{
    Node *node_ptr = this->_head;
    while (node_ptr->next != nullptr)
    {
        Node *tmp_ptr = node_ptr->next;
        delete node_ptr;
        node_ptr = tmp_ptr;
    }
}

void Linklist::del(int pos)
{
    Node *node_ptr = this->_head;
    for (int i = 0; i < pos - 1; i++)
    {
        if (node_ptr == nullptr)
        {
            return;
        }
        node_ptr = node_ptr->next;
    }
    Node *tmp_ptr = node_ptr->next;
    node_ptr->next = node_ptr->next->next;
    delete tmp_ptr;
    return;
}

void Linklist::insert(int pos, int value)
{
    if (this->_head == nullptr)
    {
        _head = new Node(value);
        return;
    }
    Node *node_ptr = this->_head;
    for (int i = 0; i < pos - 1; i++)
    {
        if (node_ptr == nullptr)
        {
            return;
        }
        node_ptr = node_ptr->next;
    }
    Node *tmp_ptr = new Node(value);
    tmp_ptr->next = node_ptr->next;
    node_ptr->next = tmp_ptr;
    return;
}

Node *Linklist::search(int seq)
{
    Node *node_ptr = this->_head;
    while ((node_ptr->getValue() != seq) || (node_ptr != nullptr))
    {
        node_ptr = node_ptr->next;
    }
    return node_ptr;
}
void Linklist::show()
{
    Node *node_ptr = this->_head;
    printf("linklist: ");
    while (node_ptr != nullptr)
    {
        printf("%d ", node_ptr->getValue());
        node_ptr = node_ptr->next;
    }
    printf("\r\n");
    return;
}
