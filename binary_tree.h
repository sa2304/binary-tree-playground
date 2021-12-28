/**
 * Binary Tree Playground based on LeetCode.com version
 */

#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <vector>

using std::string;
using std::vector;

/** Definition for a binary tree node.*/
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

std::string treeNodeToString(TreeNode* root);
void trimLeftTrailingSpaces(std::string &input);
void trimRightTrailingSpaces(string &input);
TreeNode* stringToTreeNode(string input);
void prettyPrintTree(TreeNode* node, string prefix = "", bool isLeft = true);
vector<int> preorderTraversal(TreeNode* root);
vector<int> inorderTraversal(TreeNode* root);
vector<int> postorderTraversal(TreeNode* root);
bool isSymmetric(TreeNode* root);

class BinaryTreeIterator {
public:
  enum class TraverseOrder {
    PreOrder,
    InOrder,
    PostOrder
  };

  BinaryTreeIterator(TreeNode* root, TraverseOrder order);

  bool hasNext() const;

  int next();

private:
  void InOrderLeftmost(TreeNode* root);

  void PostOrder(TreeNode* root);

  TreeNode* root_ = nullptr;
  TraverseOrder order_;
  std::stack<TreeNode*> nodes_;
};

#endif // BINARYTREE_H
