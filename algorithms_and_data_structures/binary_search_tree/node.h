#pragma once

#include <iostream>


class Node
{
private:
    Node *m_left = NULL;
    Node *m_right = NULL;
    int m_value = NULL;

public:
    int getValue() const;
    Node getLeft() const;
    Node getRight() const;

    void setValue(int value);
    void setLeft(Node *node);
    void setRight(Node *node);
};
