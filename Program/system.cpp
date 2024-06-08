#include <sstream>
#include "system.h"

std::string basicStr;

//�����ַ������й���������ʼ��-���ع��������ĸ����
HuffmanTree initHuffmanTree(const string &target) {
    multiset<Node, cmp> NList;
    //int��������ͳ��Ƶ�ȣ��±�����ַ���Ӧ��ASCII��
    int initNode[256] = {0};


    //����Ƶ��
    for (char i: target) {
        if (i >= 0) {
            cout<<i;
            initNode[i]++;
        } else return HuffmanTree(Node(-1));
    }

    //����ʼ��
    int count = 0;
    for (int i = 0; i < 256; ++i)
        if (initNode[i] != 0) {
            NList.insert(Node(i, initNode[i]));
            count++;
        }
    //����������ʼ��
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

//����������������������ڵ�Ĺ������������Map
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
        cout << "�޷����ļ�����д�������" << endl;
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
        cout << "�޷����ļ����ж�ȡ������" << endl;
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
        cout << "�޷����ļ�����д�������" << endl;
        return;
    }
    outputFile << code;
    outputFile.close();
}


//��ȡtxt�ļ�
void ReadFile(const string &Path, char *str) {
    int n = 0;
    ifstream inFile;
    inFile.open(Path); //���ļ�
    if (!inFile)
        cout << "�޷����ļ����ж�ȡ������" << Path << endl;
    char c;
    while ((c = inFile.get()) != EOF)
        str[n++] = c;
    //���ļ��е����ݴ���str��
    inFile.close();
}

//�ı��ļ�ת��Ϊ�������ļ�
void textToBinary(const char *textFile, const char *binaryFile) {
    FILE *inputFile = fopen(textFile, "r");
    FILE *outputFile = fopen(binaryFile, "wb");

    if (inputFile == NULL || outputFile == NULL) {
        printf("�ļ���ʧ��\n");
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

//�������ļ�ת��Ϊ�ı��ļ�
int binaryToText(const char *binaryFile, const char *textFile) {
    FILE *fp;

    // //�Զ����Ʒ�ʽ��ͼ��
    fopen_s(&fp, binaryFile, "rb");
    if (fp == NULL) {
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    fseek(fp, 0, SEEK_END);
    long int size = ftell(fp);
    rewind(fp);
    printf("get the size is: %ld\n", size);

    //����ͼ�����ݳ��ȷ����ڴ�buffer
    char *ImgBuffer = (char *) malloc(size * sizeof(char));
    //��ͼ�����ݶ���buffer
    fread(ImgBuffer, size, 1, fp);
    fclose(fp);


    //�Զ�����д�뷽ʽ
    if ((fp = fopen(textFile, "wb")) == NULL) {
        perror("txtxFile opening failed");
        exit(0);
    }

    //��buffer��д���ݵ�fpָ����ļ���
    fwrite(ImgBuffer, size, 1, fp);
    printf("ok");

    fclose(fp);
    free(ImgBuffer);

}