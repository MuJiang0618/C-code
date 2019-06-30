//Leetcode 110

#include <algorithm>
#include <cmath>

class Solution {
public:
    bool flag = 1;
    
    bool isBalanced(TreeNode* root) {
        // 左右根遍历
        getDepth(root);
        return flag;
    }
    
    int getDepth(TreeNode* p) {
        if (p == NULL)
            return 0;
        else {
            int left_depth = getDepth(p->left);
            int right_depth = getDepth(p->right);
            if (abs(left_depth - right_depth) > 1)
                flag = false;
            
            return max(left_depth, right_depth) + 1;
        }
    }
};