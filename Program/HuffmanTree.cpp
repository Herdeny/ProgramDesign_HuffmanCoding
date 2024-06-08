//
// Created by 16531 on 2023/12/20.
//

#include <cstring>
#include <fstream>
#include "HuffmanTree.h"

HuffmanTree::HuffmanTree(const Node n1) {
    this->setWeight(n1.getWeight());
    this->setRightChild(n1.getRightChild());
    this->setLeftChild(n1.getLeftChild());
    this->setParent(n1.getParent());
    this->setType(n1.getType());
}
//¹ş·òÂü±àÂë
string HuffmanTree::Encode(const string &target) {
    char *temp = (char *) malloc(sizeof(char) * target.length());
    strcpy(temp, target.c_str());
    string str;
    for (int i = 0; i < target.length(); ++i)
        str += _char_mapTo_code.find(temp[i])->second;
    return str;
}
//¹ş·òÂüÒëÂë
string HuffmanTree::Decode(const string &target) {
    int pos = 0;
    string str;

    while (pos < target.length()) {
        bool flag = false;
        for (int i = 1; i <= target.length() - pos; ++i) {
            char char_ = _code_mapTo_char[target.substr(pos, i)];
            if (char_) {
                flag = true;
                str += char_;
                pos += i;
                break;
            }
        }
        if (!flag) {return "´íÎó";}
    }
    return str;
}

HuffmanTree::HuffmanTree() {}

int HuffmanTree::getSize() const {
    return _size;
}

int HuffmanTree::setSize(int size) {
    return _size = size;
}


