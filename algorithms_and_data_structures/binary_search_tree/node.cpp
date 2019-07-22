#include "node.h"

int Node::getValue() const {
    return m_value;
}

Node Node::getLeft() const {
    return *m_left;
}

Node Node::getRight() const {
    return *m_right;
}

void Node::setValue(int value) {
    m_value = value;
}

void Node::setLeft(Node *node) {
    m_left = node;
}

void Node::setRight(Node *node) {
    m_right = node;
}
