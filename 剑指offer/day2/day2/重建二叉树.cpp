//给定节点数为 n 的二叉树的前序遍历和中序遍历结果，请重建出该二叉树并返回它的头结点。
//例如输入前序遍历序列{ 1,2,4,7,3,5,6,8 }和中序遍历序列{ 4,7,2,1,5,3,8,6 }，则重建出如下图所示。

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


// 知道二叉树的中序后序，重建二叉树
// 知道二叉树的中序后序，求其前序

//class Solution {
//public:
//    TreeNode* _reConstructBinaryTree(vector<int> pre, int pre_start, int pre_end, vector<int> vin, int vin_start, int vin_end)
//    {
//        if (pre_start > pre_end || vin_start > vin_end)
//        {
//            return nullptr;
//        }
//        TreeNode* root = new TreeNode(pre[pre_start]);
//        for (int i = vin_start; i <= vin_end; i++)
//        {
//            if (vin[i] == pre[pre_start])
//            {
//                root->left = _reConstructBinaryTree(pre, pre_start + 1, i - vin_start + pre_start, vin, vin_start, i - 1); // 中序分解得到的结果为[vin_start, i)和(i, vin_end] 中序元素的个数为 i-vin_start；这里的pre的区间为i - pre_start - 1 + pre_start + 1
//                root->right = _reConstructBinaryTree(pre, i - vin_start + pre_start + 1, pre_end, vin, i + 1, vin_end);
//                break;
//            }
//        }
//        return root;
//    }
//
//    TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
//        if (vin.empty() || pre.empty())
//        {
//            return nullptr;
//        }
//        return _reConstructBinaryTree(pre, 0, pre.size() - 1, vin, 0, vin.size() - 1);
//    }
//};