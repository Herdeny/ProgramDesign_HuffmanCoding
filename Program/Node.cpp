//
// Created by 16531 on 2023/12/19.
//

#include "Node.h"

Node::Node() {
    _type = 0;
    _weight = 0;
    _parent = nullptr;
    _left_child = nullptr;
    _right_child = nullptr;
}

Node::Node(int weight) : _weight(weight) {
    _type = 0;
    _parent = nullptr;
    _left_child = nullptr;
    _right_child = nullptr;
}

Node::Node(char type, int weight) : _type(type), _weight(weight) {
    _parent = nullptr;
    _left_child = nullptr;
    _right_child = nullptr;
}
Node::Node(char type, int weight, Node * lchild, Node *rchild) : _type(type), _weight(weight) ,_left_child(lchild),_right_child(rchild) {
    _parent = nullptr;
}
int Node::getWeight() const {
    return _weight;
}

int Node::setWeight(int newWeight) {
    return _weight = newWeight;
}

char Node::getType() const {
    return _type;
}

Node *Node::getParent() const {
    return _parent;
}

Node *Node::setParent(Node *newParent) {
    return _parent = newParent;
}

Node *Node::getLeftChild() const {
    return _left_child;
}

Node *Node::setLeftChild(Node *newLeftChild) {
    return _left_child = newLeftChild;
}

Node *Node::getRightChild() const {
    return _right_child;
}

Node *Node::setRightChild(Node *newRightChild) {
    return _right_child = newRightChild;
}

char Node::setType(char newType) {
    return _type=newType;
}





