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

//�����ַ������й���������ʼ��-���ع��������ĸ����
HuffmanTree initHuffmanTree(const string &);

//��txt�ļ��ж�ȡ�ı�-���ַ�������ʽ����
void ReadFile(const string &, char *);

//�������ļ����ı��ļ�ת��
int binaryToText(const char* binaryFile, const char* textFile);

//�ı��ļ���������ļ�ת��
void textToBinary(const char* textFile, const char* binaryFile);

void CreateHuffmanCode(HuffmanTree &, Node *, const string &);

void saveTree(HuffmanTree &);

void loadTree(HuffmanTree &);

void saveCode(string);

#endif //PROGRAMDESIGN_HUFFMANCODING_SYSTEM_H
