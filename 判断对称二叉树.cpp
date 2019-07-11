// Leetcode 101 判断对称二叉树
#include <vector>

class Solution {
public:
    vector<int> arr_left{};
    vector<int> arr_right{};
    
    bool isSymmetric(TreeNode* root) {
       // 用数组保存遍历时的值, 最后比较左右子树遍历的数组
       // 左子树根左右遍历, 右子树根右左遍历. 空节点作为-1添加, 不能忽视.
        if(root == NULL)
            return true;
        
        left_recur(root->left);
        right_recur(root->right);
        if(arr_left == arr_right)
            return true;
        else
            return false;
    }
    
    void left_recur(TreeNode* p) {
        if(p == NULL) {
            arr_left.push_back(-1);    
        } else {
            arr_left.push_back(p->val);
            left_recur(p->left);
            left_recur(p->right);
        }
     } 
    
    void right_recur(TreeNode* p) {
        if(p == NULL) {
            arr_right.push_back(-1);
        } else {
            arr_right.push_back(p->val);
            right_recur(p->right);
            right_recur(p->left);
        }
    }