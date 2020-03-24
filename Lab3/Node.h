#pragma once

#ifndef LAB3_NODE_H
#define LAB3_NODE_H

//#include "Tree.h"

#include "Tree.h"
// class Node
class Node {

    friend class Tree; //ACCES TO PRIVATE ATTRB.

private:
    int val;
    Node* links, * rechts;
protected:
    Node(int x) {
        val = x;
        links = rechts = nullptr;
    }
};



#endif //LAB3_NODE_H
