//二叉搜索树的查找操作Find
 Position FInd (ElementType X, BinTree BST)
 {
	 if(!BST) return NULL;
	 if(X>BTS->Data)
		 return Find(X,BTS->right); //尾递归 通常可以用循环表示
	 else if(X<BTS->Data)
		 return Fine(X,BTS->left);
	 else 
		 return  BST;

 }

  //运用循环  将“尾递归”改为迭代函数


 Position IterFind (ElementType X , BinTree BST)
 {
	 while(BST)
	 {
		 if(X>BST->Data)
		 BST=BST->right;
		 else if (X<BST->Data)
			 BST=BST->left;
		 else 
		 return BST;


	 }
	 return NULL;
 }//查找的效率取决于树的高度




 //查找最大元素和最小元素
 //１　最大元素一定在树的最右分支上
 //2   最小元素一定在树的最左分支上

Position FindMin(BinTree BST)
{
	if(!BST) return NULL;
	else if(!BST->left)//没有左针
		return BST;
	else 
		return FindMin(BST->Left);//递归法


}



Position FindMax(BinTree BST)
{
	if(BST)
		while(BST->right)  BST=BST->right;

	//沿着右分支查找直到右叶节点
	return BST;

}

　　



//二叉搜索数的插入

//保证插入后仍然符合条件






