//
// Created by 杨小川 on 2018/10/31.
//

#ifndef TREE_BINARY_BINNODE_H
#define TREE_BINARY_BINNODE_H

// Binary tree node abstract class
template <typename E>
class BinNode {
public:
    virtual ~BinNode() {} // Base destructor

    // Return the node's value
    virtual E& getElement() = 0;

    // Set the node's value
    virtual void setElement(const E&) = 0;

    // Return the node's left child
    virtual BinNode* getLeft() const = 0;

    // Set the node's left child
    virtual void setLeft(BinNode*) = 0;

    // Return the node's right child
    virtual BinNode* getRight() const = 0;

    // Set thr node's right child
    virtual void setRight(BinNode*) = 0;

    // Return true if the node is a leaf, false otherwise
    virtual bool isLeaf() = 0;
};

#endif //TREE_BINARY_BINNODE_H