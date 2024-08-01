int height(TreeNode* node, int& diameter) {
    if (!node)
        return 0;
    int left_height = height(node->left, diameter);
    int right_height = height(node->right, diameter);
    diameter = max(diameter, left_height + right_height);
    return 1 + max(left_height, right_height);
}

int diameter(TreeNode* root) {
    if (!root)
        return 0;
    int diameter = INT_MIN;
    height(root, diameter);
    return diameter;
}