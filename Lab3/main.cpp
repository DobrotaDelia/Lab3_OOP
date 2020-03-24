#include <iostream>
//#include "Node.h"
#include "Tree.h"
#include <assert.h>

//Testing von aller Funktionen

int main() {
    Tree tr;
    tr.insert(tr.root, 5);
    tr.insert(tr.root, 4);
    tr.insert(tr.root, 10);
    tr.insert(tr.root, 8);
    assert(tr.countNodes(tr.root) == 4);
    tr.deletee(8, tr.root);
    assert(tr.countNodes(tr.root) == 3);
    tr.insert(tr.root, 11);
    tr.insert(tr.root, 12);
    tr.insert(tr.root, 3);
    assert(tr.ppreorder(tr.root) == "5 4 3 10 11 12 ");
    assert(tr.inorder(tr.root) == "3 4 5 10 11 12 ");
    assert(tr.ppostorder(tr.root) == "3 4 12 11 10 5 ");
    assert(tr.countNodes(tr.root) == 6);
    assert(tr.countEdges(tr.root) == 5);
    assert(tr.height(tr.root) == 4);
    std::cout << "Test End!"; //falls alle Teste succesful sind

    return 0;
}