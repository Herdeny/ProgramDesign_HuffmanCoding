//
// Created by 16531 on 2023/12/19.
//

#ifndef PROGRAMDESIGN_HUFFMANCODING_NODE_H
#define PROGRAMDESIGN_HUFFMANCODING_NODE_H

#include "iostream"

class Node {
private:
    char _type;//结点值
    int _weight;//频度
    Node *_parent;//双亲结点指针
    Node *_left_child;//左孩子指针
    Node *_right_child;//右孩子指针
public:
    //结点初始化
    Node();

    Node(int);

    Node(char, int);

    Node(char, int, Node *, Node *);

    //获取频度
    int getWeight() const;

    //设置频度
    int setWeight(int);

    //获取结点值
    char getType() const;

    //设置结点值
    char setType(char);

    //获取双亲结点指针
    Node *getParent() const;

    //设置双亲结点指针
    Node *setParent(Node *);

    //获取左孩子结点指针
    Node *getLeftChild() const;

    //设置左孩子结点指针
    Node *setLeftChild(Node *);

    //获取右孩子结点指针
    Node *getRightChild() const;

    //设置右孩子结点指针
    Node *setRightChild(Node *);
};

//函数比较器-结点值按频度比较大小
struct cmp {
    bool operator()(const Node &a, const Node &b) const {
        return a.getWeight() < b.getWeight();
    }
};

#endif //PROGRAMDESIGN_HUFFMANCODING_NODE_H
