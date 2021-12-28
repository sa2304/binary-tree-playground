//
// Created by Антон Шмидт on 28.12.2021.
//

#include <cassert>
#include <iostream>
#include "binary_tree.h"

using namespace std;

void TestStringToTreeNode() {
  {
    TreeNode *head = stringToTreeNode("[1,2,2,3,4,4,3]"s);
    prettyPrintTree(head);
    cout << endl;
  }
  {
    TreeNode *head = stringToTreeNode("[1,2,2,null,3,null,3]"s);
    prettyPrintTree(head);
    cout << endl;
  }
  {
    TreeNode *head = stringToTreeNode("[]"s);
    prettyPrintTree(head);
    cout << endl;
  }
}

int main() {
  TestStringToTreeNode();
  cout << "Ok!"s << endl;

  return 0;
}