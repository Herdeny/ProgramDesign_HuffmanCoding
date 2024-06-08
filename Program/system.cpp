#include <sstream>
#include "system.h"

std::string basicStr;

//依据字符串进行哈夫曼树初始化-返回哈夫曼树的根结点
HuffmanTree initHuffmanTree(const string &target) {
    multiset<Node, cmp> NList;
    //int数组用来统计频度，下标代表字符对应的ASCII码
    int initNode[256] = {0};


    //计算频度
    for (char i: target) {
        if (i >= 0) {
            cout<<i;
            initNode[i]++;
        } else return HuffmanTree(Node(-1));
    }

    //结点初始化
    int count = 0;
    for (int i = 0; i < 256; ++i)
        if (initNode[i] != 0) {
            NList.insert(Node(i, initNode[i]));
            count++;
        }
    //哈夫曼树初始化
    while (NList.size() > 1) {
        Node *parent = new Node();
        Node *leftChild = new Node(NList.begin()->getType(), NList.begin()->getWeight(), NList.begin()->getLeftChild(),
                                   NList.begin()->getRightChild());
        NList.erase(NList.begin());
        Node *rightChild = new Node(NList.begin()->getType(), NList.begin()->getWeight(), NList.begin()->getLeftChild(),
                                    NList.begin()->getRightChild());
        NList.erase(NList.begin());
        rightChild->setParent(parent);
        leftChild->setParent(parent);
        parent->setLeftChild(leftChild);
        parent->setRightChild(rightChild);
        parent->setWeight(leftChild->getWeight() + rightChild->getWeight());
        NList.insert(*parent);
    }
    HuffmanTree huffmanTree(*NList.begin());
    huffmanTree.setSize(count * 2 - 1);
    return huffmanTree;
}

//先序遍历哈夫曼树，将各节点的哈夫曼编码编入Map
void CreateHuffmanCode(HuffmanTree &tree, Node *Node, const string &str) {
    if (Node == NULL) return;
    if (Node->getType()) {
        tree._char_mapTo_code.insert(pair<char, string>(Node->getType(), str));
        tree._code_mapTo_char.insert(pair<string, char>(str, Node->getType()));
    }
    CreateHuffmanCode(tree, Node->getLeftChild(), str + "0");
    CreateHuffmanCode(tree, Node->getRightChild(), str + "1");
}

void saveTree(HuffmanTree &tree) {
    ofstream outputFile("hfmTree.dat", ios::binary);
    if (!outputFile) {
        cout << "无法打开文件进行写入操作！" << endl;
        return;
    }
    for (const auto &i: tree._code_mapTo_char) {
        outputFile << i.first << ' ' << (int) i.second << endl;
    }
    outputFile.close();
}

void loadTree(HuffmanTree &tree) {
    ifstream inputFile("hfmTree.dat", ios::binary);
    if (!inputFile) {
        cout << "无法打开文件进行读取操作！" << endl;
        return;
    }
    string key;
    int value;
    while (inputFile >> key >> value)
        tree._code_mapTo_char[key] = (char) value;
    inputFile.close();
}

void saveCode(string code) {
    ofstream outputFile;
    outputFile.open("code.txt");
    if (!outputFile.is_open()) {
        cout << "无法打开文件进行写入操作！" << endl;
        return;
    }
    outputFile << code;
    outputFile.close();
}


//读取txt文件
void ReadFile(const string &Path, char *str) {
    int n = 0;
    ifstream inFile;
    inFile.open(Path); //打开文件
    if (!inFile)
        cout << "无法打开文件进行读取操作：" << Path << endl;
    char c;
    while ((c = inFile.get()) != EOF)
        str[n++] = c;
    //将文件中的数据存入str中
    inFile.close();
}

//文本文件转换为二进制文件
void textToBinary(const char *textFile, const char *binaryFile) {
    FILE *inputFile = fopen(textFile, "r");
    FILE *outputFile = fopen(binaryFile, "wb");

    if (inputFile == NULL || outputFile == NULL) {
        printf("文件打开失败\n");
        return;
    }

    char buffer[1024];
    size_t bytesRead;

    while ((bytesRead = fread(buffer, sizeof(char), sizeof(buffer), inputFile)) > 0) {
        fwrite(buffer, sizeof(char), bytesRead, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);
}

//二进制文件转换为文本文件
int binaryToText(const char *binaryFile, const char *textFile) {
    FILE *fp;

    // //以二进制方式打开图像
    fopen_s(&fp, binaryFile, "rb");
    if (fp == NULL) {
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    fseek(fp, 0, SEEK_END);
    long int size = ftell(fp);
    rewind(fp);
    printf("get the size is: %ld\n", size);

    //根据图像数据长度分配内存buffer
    char *ImgBuffer = (char *) malloc(size * sizeof(char));
    //将图像数据读入buffer
    fread(ImgBuffer, size, 1, fp);
    fclose(fp);


    //以二进制写入方式
    if ((fp = fopen(textFile, "wb")) == NULL) {
        perror("txtxFile opening failed");
        exit(0);
    }

    //从buffer中写数据到fp指向的文件中
    fwrite(ImgBuffer, size, 1, fp);
    printf("ok");

    fclose(fp);
    free(ImgBuffer);

}