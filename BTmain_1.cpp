/*************************************************************************
    > File Name: BTmain_1.cpp
    > Author: Yunruowu
    > Mail: xuyunyang12345@163.com
    > Created Time: Mon 25 Jun 2018 11:18:01 AM DST
 ************************************************************************/
#include"BinaryTree.h"

#include<iostream>
using namespace std;
int main()
{
	BinaryTree<int> a;
	BinaryTreeNode<int> *b1, *b2, *b3, *b4 , *b5, *b6;
	b1 = a.MakeTree(6,NULL,NULL);
	b2 = a.MakeTree(5,NULL,NULL);
	b3 = a.MakeTree(4,NULL,NULL);
	b4 = a.MakeTree(3,b1,NULL);
	b5 = a.MakeTree(2,b3,b2);
	b6 = a.MakeTree(1,b5,b4);
	a.PreOrder(a.root);
return 0;
}
