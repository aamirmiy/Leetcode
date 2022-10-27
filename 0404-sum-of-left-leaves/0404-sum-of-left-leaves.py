# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self, root, side):
        if root is None:
            return []
        if not root.left and not root.right:
            if(side == -1): self.sum+=root.val
        self.dfs(root.left,-1)
        self.dfs(root.right, 1)
        
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
        self.sum=0
        self.dfs(root,0)
        return self.sum
        
        
        