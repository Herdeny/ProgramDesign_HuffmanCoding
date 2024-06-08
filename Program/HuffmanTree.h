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
    //树的结点数
    int _size;

public:
    //树结点初始化
    HuffmanTree();

    explicit HuffmanTree(Node);

    //编码模块
    string Encode(const string &);

    //解码模块
    string Decode(const string &);



    //获取树结点数
    int getSize() const;

    //设置树结点数
    int setSize(int);

    //字符-哈夫曼码 Map
    map<char, string> _char_mapTo_code;

    //哈夫曼码-字符 Map
    map<string, char> _code_mapTo_char;
};


#endif //PROGRAMDESIGN_HUFFMANCODING_HUFFMANTREE_H
