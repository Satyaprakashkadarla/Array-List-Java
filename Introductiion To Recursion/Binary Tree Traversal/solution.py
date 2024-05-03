class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

def inorder_traversal(root):
    if root:
        inorder_traversal(root.left)
        print(root.val, end=" ")
        inorder_traversal(root.right)

def preorder_traversal(root):
    if root:
        print(root.val, end=" ")
        preorder_traversal(root.left)
        preorder_traversal(root.right)

def postorder_traversal(root):
    if root:
        postorder_traversal(root.left)
        postorder_traversal(root.right)
        print(root.val, end=" ")

# Constructing a binary tree
root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)

print("Inorder traversal:", end=" ")
inorder_traversal(root)
print()

print("Preorder traversal:", end=" ")
preorder_traversal(root)
print()

print("Postorder traversal:", end=" ")
postorder_traversal(root)
print()
