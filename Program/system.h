//
// Created by 16531 on 2023/12/20.
//

#ifndef PROGRAMDESIGN_HUFFMANCODING_SYSTEM_H
#define PROGRAMDESIGN_HUFFMANCODING_SYSTEM_H

#include <fstream>
#include <string>
#include <set>
#include "Node.h"
#include "HuffmanTree.h"

using namespace std;

//依据字符串进行哈夫曼树初始化-返回哈夫曼树的根结点
HuffmanTree initHuffmanTree(const string &);

//从txt文件中读取文本-以字符串的形式返回
void ReadFile(const string &, char *);

//二进制文件向文本文件转化
int binaryToText(const char* binaryFile, const char* textFile);

//文本文件向二进制文件转化
void textToBinary(const char* textFile, const char* binaryFile);

void CreateHuffmanCode(HuffmanTree &, Node *, const string &);

void saveTree(HuffmanTree &);

void loadTree(HuffmanTree &);

void saveCode(string);

#endif //PROGRAMDESIGN_HUFFMANCODING_SYSTEM_H
