#include <iostream>
#include <unordered_map>
using namespace std;

struct TreeNode {
    char val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(char x) : val(x), left(NULL), right(NULL) {}
};

unordered_map<char, int> pos;

TreeNode* buildTree(string& inorder, int il, int ir, string& postorder, int pl, int pr) {
    if (il > ir || pl > pr) {
        return nullptr;
    }
    char rootVal = postorder[pr];
    int k = pos[rootVal];
    TreeNode* root = new TreeNode(rootVal);
    root->left = buildTree(inorder, il, k - 1, postorder, pl, pl + k - il - 1);
    root->right = buildTree(inorder, k + 1, ir, postorder, pl + k - il, pr - 1);
    return root;
}

void printTree(TreeNode* root) {
    if (root) {
        cout << root->val;
        if (root->left || root->right) {
            cout << "(";
            printTree(root->left);
            cout << ",";
            printTree(root->right);
            cout << ")";
        }
    }
}

int main() {
    string inorder, postorder;
    cin >> postorder >> inorder;
    int n = inorder.size();
    for (int i = 0; i < n; i++) {
        pos[inorder[i]] = i;
    }
    TreeNode* root = buildTree(inorder, 0, n - 1, postorder, 0, n - 1);
    printTree(root);
    return 0;
}
