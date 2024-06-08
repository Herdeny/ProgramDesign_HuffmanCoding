#include <iostream>
#include <QApplication>
#include <set>
#include "Node.h"
#include "HuffmanTree.h"
#include "system.h"
#include "../UI/mainwindow.h"

using namespace std;

int main(int argc, char *argv[]) {

//    Æô¶¯´°¿Ú
    QApplication a(argc, argv);
    mainwindow w;
    w.show();
    return a.exec();
//    char dataString[1000] = {0};
//   char codeString[20000] = {0};
//    string dataPath = "data.txt";
//    string codePath = "code.txt";
//    ReadFile(dataPath, dataString);
//    HuffmanTree huffmanTree = initHuffmanTree(dataString);
//    string huffmanCode;
//    CreateHuffmanCode(huffmanTree, &huffmanTree, huffmanCode);
//    saveTree(huffmanTree);
//    string result = huffmanTree.Encode(dataString);
//    saveCode(result);
//    HuffmanTree huffmanTree2;
//    loadTree(huffmanTree2);
//    ReadFile(codePath, codeString);
//    cout << codeString << endl;
//    cout << huffmanTree2.Decode(codeString) << endl;
    return 0;
}

