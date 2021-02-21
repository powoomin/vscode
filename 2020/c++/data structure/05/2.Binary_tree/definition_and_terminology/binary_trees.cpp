#include <iostream>
using namespace std;

struct TreeNode{
    int key;
    TreeNode* left;
    TreeNode* right;
    TreeNoed(int k, TreeNode* 1, TreeNode* r)
    {
        key = k;
        left = 1;
        right = r;
    }
    TreeNode(int k) : key(k), left(nullptr), right(nullptr) {}

    ~TreeNode(){}
};
using tree = TreeNode*;
int main()
{
    struct TreeNode* t;
    TreeNode* t = new TreeNode(9);
    tree t = new TreeNode(9);

    return 0;
}