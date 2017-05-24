//静态查找  顺序存储  无哨兵

int squentialsearch(List Tab1,ElementTyple K)
{
	int i;
	for(i=Tab1->length;i>0&&Tab1->Element[i]==K;i--){
		return i;
	}
}

//有哨兵

int squentialsearch(list Tab1,ElementTyply K)
{
	int i;
	tab1->Element[0]=K;
	for(i=Tab1->length;Tab1->Element[i]==K;i--){  //循环退出有两种可能1 中间的某个位置=K  2循环运行到i=0时
		return i;            //i=0表示没找到  i!=0表示找到了
	}
}

//时间复杂度为O(n)





//二分查找法


int Binary(list Tab1,ElementType K)
{
	int left,right,min;
	left=1;
	right=Tab1->length;
	min=(left+right)/2;
	while(left<=right){
		min=(left+right)/2;
		if(Tab1->Element[min]>K){
			right=min-1;
		}
		else if(Tab1->Element[min]<K){
			left=min+1;
		}
		else{
			return min;
		}
	}
	return -1;
}


//时间复杂度是O(logn)



//先序遍历  


void PreOrderTraversal(BinTree BT)
{
	if(BT){

		printf("%d",BT->Data);
		PreOrderTraversal(BT->left);
		PreOrderTraversal(BT->right);
	}
}


//中序遍历


void INOrderTracersal(BinTree BT)
{
	if(BT){

		INOrderTraversal(BT->left);
		printf("%d",BT->Data);
		INOrderTraversal(BT->right);
	}
}




//后序遍历




void PostOrderTraversal(BinTree BT)
{
	if(BT){
		PostOrderTraversal(BinTree BT);
		PostOrderTraversal(BinTree BT);
		printf("%d",BT->Data);
	}
}





//中序遍历 的非递归


void INOrderTraversal(BinTree BT)
{
	BinTree T=BT;               
	stack S=CreatStack(MaxSize);
	while(T||!=IsEmpty(S)){
		while(T){
			push(S,T);
			T=T->left;
		}
		if(!IsEmpty(S)){
			T=Pop(S);
			printf("%d",T->Data);
			T=T->right;
		}
	}

}




//先序遍历的非递归方法

void PreOrderTraveral(BinTree BT)
{
	BinTree BT;
	strack S=CreatStrack(MaxSoze);
	while(T||!IsEmpty){
		while(T){
			push(S,T);
			printf("%d",T->Data);
  			T=T->left;
		}
		
		if(!IsEmpty){
			T=Pop(S);
			T=T->right;
		}
	}
}




//后序遍历的非递归



void InOrderTraversal( BinTree BT )  
{  
   BinTree T BT;  
   Stack S = CreatStack( MaxSize ); /*创建并初始化堆栈S*/  
   Stack Q = CreatStack( MaxSize ); /*创建并初始化堆栈Q，用于输出反向*/  
   while( T || !IsEmpty(S) ){  
       while(T){ /*一直向右并将沿途结点压入堆栈*/  
           Push(S,T);  
           Push(Q,T);/*将遍历到的结点压栈，用于反向*/  
           T = T->Right;  
       }  
       if(!IsEmpty(S)){  
       T = Pop(S); /*结点弹出堆栈*/  
       T = T->Left; /*转向左子树*/  
       }  
   }  
   while( !IsEmpty(Q) ){  
       T = Pop(Q);  
       printf(“%5d”, T->Data);    /*（访问）打印结点*/
   }  
}  




//层序遍历   队列的使用



void LeverOrderTraveral(BinTree BT)
{
	Queue Q;
	BinTree T;
	if(!BT) return;
	Q=CreatQueue(MaxSize);
	AddQ(Q,BT);
    while(T){
		T=Delect(Queue Q);
		printf("%d",T->Data);
		if(T->left)  AddQ(Q,T->left);
		if(T->right)  AddQ(Q,T->right);
	}
}






