#pragma once


#ifndef LAB3_TREE_H
#define LAB3_TREE_H

#include "Node.h"
#include <string>

class Tree {
    friend class Node;

protected:
public:
    Node* root;
    /**
    * constructor
    */
    Tree();
    /**
     * insereaza un nod nou
     * @param tree
     * @param v
     */
    void insert(Node* tree, int v);
    /**
     * sterge un nod
     * @param v
     * @param tree
     */
    void deletee(int v, Node* tree);

    /**
     * parcurge inorder
     * @param node
     * @return
     */
    std::string inorder(Node* node);
    /**
     * parcurge preorder
     * @param node
     * @return
     */
    std::string ppreorder(Node* node);
    /**
     * parcurge postorder
     * @param node
     * @return
     */
    std::string ppostorder(Node* node);

    /**
     * returneaza numarul de noduri
     * @param n
     * @return
     */
    int countNodes(Node* n);
    /**
     * returneaza numarul de laturi
     * @param n
     * @return
     */
    int countEdges(Node* n);
    /**
     * returneaza inaltimea
     * @param n
     * @return
     */
    int height(Node* n);
};

#endif //LAB3_TREE_H
