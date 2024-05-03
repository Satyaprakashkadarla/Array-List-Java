class TreeNode {
    constructor(val) {
        this.val = val;
        this.left = this.right = null;
    }
}

function inorderTraversal(root) {
    if (root !== null) {
        inorderTraversal(root.left);
        process.stdout.write(root.val + " ");
        inorderTraversal(root.right);
    }
}

function preorderTraversal(root) {
    if (root !== null
