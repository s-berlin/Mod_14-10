#ifndef TRIE_H
#define TRIE_H

#include <string>
using namespace std;

const int ALPHABET_SIZE = 26;

// Структура узла дерева
struct TrieNode
{
    string word;
    int path;
    struct TrieNode* children[ALPHABET_SIZE];
    // isEndOfWord - true, åñëè êëþ÷ ÿâëÿåòñÿ êîíöîì ñëîâà
    bool isEndOfWord;
    TrieNode()
    {
        word = "";
        isEndOfWord = false;
        memset(children, NULL, sizeof(TrieNode*) * ALPHABET_SIZE);
    }
};

TrieNode* getNewNode(void);
//bool search(TrieNode*, string);
bool isEmpty(TrieNode*);

class TrieTree {
public:
    TrieNode* root;
    TrieTree();
    ~TrieTree();
    // Äîáàâëåíèå ñëîâà â ñëîâàðü
    void insert(string str);
    // Ïîèñê ñëîâ ñ ïðåôèêñîì str â ñëîâàðå
    int search(TrieNode* root, string str);
    // 
    void destory(TrieNode* root);
    // Ðàñïå÷àòûâàåì âñå óçëû â äåðåâå
    void printAll();
    // Âûâåñòè ñëîâà ñ ïðåôèêñîì str
    void printPre(string str);
    // Âûâåñòè íóìåðîâàííûé ñïèñîê ñëîâ ñ ïðåôèêñîì str
    void SelectWord(string str);
    // Âûâîäèì âñå ñëîâà ñ êîðíåì â ëåêñèêîãðàôè÷åñêîì ïîðÿäêå
    void Print(TrieNode* root);
    // Âûáîð ñëîâà
    void Select(TrieNode* root);
    // Óäàëåíèå ñëîâà
    TrieNode* remove(TrieNode* root, string str, int debth);
};

#endif
