#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* pParent;
    Node* pLeftChild;
    Node* pRightChild;
};

class BinarySearchTree {
private:
    Node* pRoot;

public:
    BinarySearchTree();
    ~BinarySearchTree();

public:
    void push(int _value);
    void postOrder(Node* pCurNode);
    Node* get() { return pRoot; }
};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    BinarySearchTree bst;

    int n;
    while (true) {
        cin >> n;
        if (cin.eof()) break;
        else bst.push(n);
    }

    bst.postOrder(bst.get());

    return 0;
}

BinarySearchTree::BinarySearchTree() {
    pRoot = nullptr;
}

BinarySearchTree::~BinarySearchTree() {
    
}

void BinarySearchTree::push(int _value) {
    if (pRoot == nullptr) {
        pRoot = new Node;

        pRoot->value = _value;
        pRoot->pParent = nullptr;
        pRoot->pLeftChild = nullptr;
        pRoot->pRightChild = nullptr;
    }
    else {
        Node* pNewNode = new Node;
        pNewNode->value = _value;
        pNewNode->pLeftChild = nullptr;
        pNewNode->pRightChild = nullptr;

        Node* pNextNode = pRoot;
        while (pNextNode != nullptr) {
            pNewNode->pParent = pNextNode;
            if (pNextNode->value > _value) 
            {
                pNextNode = pNextNode->pLeftChild;
            }
            else 
            {
                pNextNode = pNextNode->pRightChild;
            }
        }
        
        if (pNewNode->pParent->value > _value) {
            pNewNode->pParent->pLeftChild = pNewNode;
        }
        else {
            pNewNode->pParent->pRightChild = pNewNode;
        }
    }
}

void BinarySearchTree::postOrder(Node* pCurNode) {
    if (pCurNode == nullptr) return;
    postOrder(pCurNode->pLeftChild);
    postOrder(pCurNode->pRightChild);
    cout << pCurNode->value << "\n";
}