//
// Created by 16531 on 2023/12/20.
//

#ifndef PROGRAMDESIGN_HUFFMANCODING_HUFFMANTREE_H
#define PROGRAMDESIGN_HUFFMANCODING_HUFFMANTREE_H

#include <map>
#include "Node.h"

using namespace std;

class HuffmanTree : public Node {
private:
    //���Ľ����
    int _size;

public:
    //������ʼ��
    HuffmanTree();

    explicit HuffmanTree(Node);

    //����ģ��
    string Encode(const string &);

    //����ģ��
    string Decode(const string &);



    //��ȡ�������
    int getSize() const;

    //�����������
    int setSize(int);

    //�ַ�-�������� Map
    map<char, string> _char_mapTo_code;

    //��������-�ַ� Map
    map<string, char> _code_mapTo_char;
};


#endif //PROGRAMDESIGN_HUFFMANCODING_HUFFMANTREE_H
