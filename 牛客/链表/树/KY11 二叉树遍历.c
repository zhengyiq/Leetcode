//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//struct TreeNode {
//    char val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//};
//
//
//struct TreeNode* TreeCreate(char* arr, int* pi)
//{
//    if (arr[*pi] == '#')
//    {
//        (*pi)++;
//        return NULL;
//    }
//
//    struct TreeNode* newnode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
//
//    newnode->val = arr[(*pi)++];
//
//    newnode->left = TreeCreate(arr, pi);
//    newnode->right = TreeCreate(arr, pi);
//
//    return newnode;
//}
//
//void InOrder(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//    InOrder(root->left);
//    printf("%c ", root->val);
//    InOrder(root->right);
//}
//
//int main() {
//    char arr[100];
//    scanf("%s", arr);
//    int pi = 0;
//    struct TreeNode* root = TreeCreate(arr, &pi);
//    InOrder(root);
//    return 0;
//}