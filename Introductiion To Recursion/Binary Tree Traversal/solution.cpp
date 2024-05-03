#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void inorderTraversal(TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        std::cout << root->val << " ";
        inorderTraversal(root->right);
    }
}

void preorderTraversal(TreeNode* root) {
    if (root != NULL) {
        std::cout << root->val << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(TreeNode* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        std::cout << root->val << " ";
    }
}

int main() {
    // Constructing a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::cout << "Inorder traversal: ";
    inorderTraversal(root);
    std::cout << std::endl;

    std::cout << "Preorder traversal: ";
    preorderTraversal(root);
    std::cout << std::endl;

    std::cout << "Postorder traversal: ";
    postorderTraversal(root);
    std::cout << std::endl;

    return 0;
}
