
#include <iostream>
#include "Tree.h"
#include <queue>
#include "Node.h"

using namespace std;
//constructor
Tree::Tree() {
    root = nullptr;
}
//Einfugen
void Tree::insert(Node* tree, int v) {
    if (root == nullptr) {
        root = new Node(v);
        //root->val=v;
        //root->links = nullptr;
        //root->rechts = nullptr;
    }
    else {
        Node* ptr = root;
        //while (ptr->rechts!= nullptr and ptr->links!= nullptr) {
        while (ptr) {
            if (ptr->val > v) {
                if (ptr->links == nullptr) {
                    ptr->links = new Node(v);
                    break;
                }
                ptr = ptr->links;
            }
            else if (ptr->val < v) {
                if (ptr->rechts == nullptr) {
                    ptr->rechts = new Node(v);
                    break;
                }
                ptr = ptr->rechts;
            }


        }
    }
}
//Loschen
void Tree::deletee(int v, Node* tree) {
    Node* ptr = root;
    while (ptr) {
        if (ptr->rechts != nullptr)
            if (ptr->rechts->val == v) {
                ptr->rechts = ptr->rechts->links;
                break;
            }
        if (ptr->links != nullptr)
            if (ptr->links->val == v) {
                ptr->links = ptr->links->rechts;
                break;
            }
        if (ptr->val > v) {
            if (ptr->links == nullptr) {
                break;
            }
            ptr = ptr->links;
        }
        else
            if (ptr->val < v) {
                if (ptr->rechts == nullptr) {
                    break;
                }
                ptr = ptr->rechts;
            }
    }

}
//inorder
std::string Tree::inorder(Node* root) {
    if (root == NULL)
        return "";
    return inorder(root->links) + std::to_string(root->val) + " " + inorder(root->rechts);
}
//preorder
std::string Tree::ppreorder(Node* root) {
    if (root == NULL)
        return "";
    return std::to_string(root->val) + " " + ppreorder(root->links) + ppreorder(root->rechts);
}
//postorder
std::string Tree::ppostorder(Node* root) {

    if (root == NULL)
        return "";
    return ppostorder(root->links) + ppostorder(root->rechts) + std::to_string(root->val) + " ";
}
//Knotenanzahl
int Tree::countNodes(Node* n) {
    if (n == nullptr)
        return 0;
    else
        //if(n->links != nullptr)
        return 1 + countNodes(n->links) + countNodes(n->rechts);
    //if(n->rechts != nullptr)
        //return 1+countNodes(n->rechts);
}

int Tree::countEdges(Node* n) {
    return countNodes(n) - 1;
}

int Tree::height(Node* n) {
    if (n == NULL)
        return 0;
    else
    {
        int l = height(n->links);
        int r = height(n->rechts);

        if (l > r)
            return(l + 1);
        else return(r + 1);
    }
}
