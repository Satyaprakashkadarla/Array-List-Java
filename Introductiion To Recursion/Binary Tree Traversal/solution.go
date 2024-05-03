package main

import "fmt"

type TreeNode struct {
    Val   int
    Left  *TreeNode
    Right *TreeNode
}

func inorderTraversal(root *TreeNode) {
    if root != nil {
        inorderTraversal(root.Left)
        fmt.Printf("%d ", root.Val)
        inorderTraversal(root.Right)
    }
}

func preorderTraversal(root *TreeNode) {
    if root != nil {
        fmt.Printf("%d ", root.Val)
        preorderTraversal(root.Left)
        preorderTraversal(root.Right)
    }
}

func postorderTraversal(root *TreeNode) {
    if root != nil {
        postorderTraversal(root.Left)
        postorderTraversal(root.Right)
        fmt.Printf("%d ", root.Val)
    }
}

func main() {
    // Constructing a binary tree
    root := &TreeNode{Val: 1}
    root.Left = &TreeNode{Val: 2}
    root.Right = &TreeNode{Val: 3}

    fmt.Print("Inorder traversal: ")
    inorderTraversal(root)
    fmt.Println()

    fmt.Print("Preorder traversal: ")
    preorderTraversal(root)
    fmt.Println()

    fmt.Print("Postorder traversal: ")
    postorderTraversal(root)
    fmt.Println()
}
