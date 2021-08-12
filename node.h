#ifndef _NODE_H
#define _NODE_H
using namespace std;
template <typename Type> class TreeNode;
template <typename Type> class Tree;
template <class Type> class TreeNode
{
        friend class Tree<Type>;
    public:
        TreeNode(const Type &);
        TreeNode(const TreeNode&);
        TreeNode();
        Type get_data();
    protected: 
        TreeNode* left;           /* указатель на левого ребенка */
        TreeNode* right;          /* указатель на правого ребенка */
        TreeNode* parent;         /* указатель на родителя */
        Type data;            /* ключ */
        int num;
};
template<class Type>
TreeNode <Type>::TreeNode(){
    data = 0;
    parent = left = right = 0;
}
template<class Type>
TreeNode <Type>::TreeNode(const Type &a)
{
        data=a;
        parent = left = right = 0;
}
template<class Type>
TreeNode <Type>::TreeNode(const TreeNode &obj){
    left = obj.left;
    right = obj.right;
    parent = obj.parent;
    data = obj.data;
}
template <class Type>
Type TreeNode <Type>::get_data()
{
        return data;
}
#endif