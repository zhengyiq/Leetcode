//�����ڵ���Ϊ n �Ķ�������ǰ����������������������ؽ����ö���������������ͷ��㡣
//��������ǰ���������{ 1,2,4,7,3,5,6,8 }�������������{ 4,7,2,1,5,3,8,6 }�����ؽ�������ͼ��ʾ��

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


// ֪������������������ؽ�������
// ֪���������������������ǰ��

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
//                root->left = _reConstructBinaryTree(pre, pre_start + 1, i - vin_start + pre_start, vin, vin_start, i - 1); // ����ֽ�õ��Ľ��Ϊ[vin_start, i)��(i, vin_end] ����Ԫ�صĸ���Ϊ i-vin_start�������pre������Ϊi - pre_start - 1 + pre_start + 1
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